#ifndef INTERNATIONALFLIGHT_H
#define INTERNATIONALFLIGHT_H

#include "Flight.h"

class InternationalFlight : public Flight {
private:
    string country;           // destination country
    bool   visaRequired;      // true/false
    double internationalTax;  // higher tax than domestic

public:
    InternationalFlight(string fNum, string org, string dest,
                        string date, string time, int seats,
                        string country, bool visa, double tax);

    string getCountry()     const;
    bool   isVisaRequired() const;

    double calculateBaseFare() const override;
    void   displayDetails()   const override;

    ~InternationalFlight();
};

#endif
