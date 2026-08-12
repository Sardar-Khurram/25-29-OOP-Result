#ifndef CHARTERFLIGHT_H
#define CHARTERFLIGHT_H

#include "Flight.h"

class CharterFlight : public Flight {
private:
    string contractHolder;    // company/person who booked the charter
    double charterFlatFee;    // fixed total price for whole plane

public:
    CharterFlight(string fNum, string org, string dest,
                  string date, string time, int seats,
                  string holder, double fee);

    string getContractHolder() const;
    double getCharterFlatFee() const;

    double calculateBaseFare() const override;
    void   displayDetails()   const override;

    ~CharterFlight();
};

#endif
