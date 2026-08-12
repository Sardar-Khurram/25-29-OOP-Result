#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int seats;

public:
    Car(string m, double rate, int s);

    double calculateCost(int days) override;

    void display() override;
};

#endif
