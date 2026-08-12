#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    double payloadCapacity;

public:
    Truck(string m, double rate, double payload);

    double calculateCost(int days) override;

    void display() override;
};

#endif
