#ifndef RENTAL_H
#define RENTAL_H

#include "Customer.h"
#include "Vehicle.h"

class Rental
{
public:
    Customer* customer;
    Vehicle* vehicle;
    int days;
    double cost;
    bool active;

    Rental(Customer* c, Vehicle* v, int d);
};

#endif
