#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle
{
private:
    int engineCC;

public:
    Motorbike(string, double, int);

    double calculateCost(int days);

    void display();
};

#endif