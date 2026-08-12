#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle
{
private:
    int engineCC;

public:
    Motorbike(string m, double rate, int cc);

    double calculateCost(int days) override;

    void display() override;
};

#endif
