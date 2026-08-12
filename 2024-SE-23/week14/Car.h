#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
private:

    int seats;

public:

    Car(string,double,int);

    double calculateCost(int days);

    void display();
};

#endif