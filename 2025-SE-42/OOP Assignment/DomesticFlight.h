#ifndef DOMESTICFLIGHT_H
#define DOMESTICFLIGHT_H

#include "Flight.h"

class DomesticFlight : public Flight {
private:
    string province;       // e.g. "Punjab", "KPK"
    double taxRate;        // e.g. 0.05 = 5% tax

public:
    DomesticFlight(string fNum, string org, string dest,
                   string date, string time, int seats,
                   string prov, double tax);

    string getProvince() const;

    // Override pure virtual functions
    double calculateBaseFare() const override;
    void   displayDetails()   const override;

    ~DomesticFlight();
};

#endif
