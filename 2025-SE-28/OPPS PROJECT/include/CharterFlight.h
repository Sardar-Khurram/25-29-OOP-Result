#ifndef CHARTERFLIGHT_H
#define CHARTERFLIGHT_H

#include "Flight.h"

class CharterFlight : public Flight
{
private:
    string contractHolder;
    double charterFare;

public:

    CharterFlight(
        string fn = "",
        string org = "",
        string dest = "",
        string date = "",
        int seats = 0,
        string holder = "",
        double fare = 100000.0
    );

    double calculateFare();

    void display();
};

#endif
