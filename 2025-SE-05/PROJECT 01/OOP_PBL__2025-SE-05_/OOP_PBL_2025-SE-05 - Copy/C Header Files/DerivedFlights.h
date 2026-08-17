#ifndef DERIVED_FLIGHTS_H
#define DERIVED_FLIGHTS_H

#include "Flight.h"

// Domestic flight: regional routes with a local tax rate.
class DomesticFlight : public Flight {
private:
    std::string region;
    double      taxRate;    // percentage, e.g. 5.0 means 5%

public:
    DomesticFlight(const std::string& flightNo, const std::string& orig,
                   const std::string& dest, const std::string& date,
                   const std::string& time, int seats,
                   const std::string& region, double taxRate);

    double      calculateBaseFare() const override;
    void        displayDetails()    const override;
    std::string getFlightType()     const override { return "Domestic"; }
    std::string serialize()         const override;

    std::string getRegion()  const { return region; }
    double      getTaxRate() const { return taxRate; }
};

// International flight: cross-border routes with an optional surcharge.
class InternationalFlight : public Flight {
private:
    std::string country;
    bool        visaRequired;
    double      surcharge;

public:
    InternationalFlight(const std::string& flightNo, const std::string& orig,
                        const std::string& dest, const std::string& date,
                        const std::string& time, int seats,
                        const std::string& country, bool visaRequired,
                        double surcharge);

    double      calculateBaseFare() const override;
    void        displayDetails()    const override;
    std::string getFlightType()     const override { return "International"; }
    std::string serialize()         const override;

    std::string getCountry()      const { return country; }
    bool        isVisaRequired()  const { return visaRequired; }
    double      getSurcharge()    const { return surcharge; }
};

// Charter flight: privately contracted, flat fee split across seats.
class CharterFlight : public Flight {
private:
    std::string contractHolder;
    double      charterFee;

public:
    CharterFlight(const std::string& flightNo, const std::string& orig,
                  const std::string& dest, const std::string& date,
                  const std::string& time, int seats,
                  const std::string& contractHolder, double charterFee);

    double      calculateBaseFare() const override;
    void        displayDetails()    const override;
    std::string getFlightType()     const override { return "Charter"; }
    std::string serialize()         const override;

    std::string getContractHolder() const { return contractHolder; }
    double      getCharterFee()     const { return charterFee; }
};

#endif
