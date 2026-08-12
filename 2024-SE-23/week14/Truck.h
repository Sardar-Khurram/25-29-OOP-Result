#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    double payload;

public:
    Truck(string, double, double);

    double calculateCost(int days);

    void display();
};

#endif