#ifndef RENTAL_H
#define RENTAL_H

#include <iostream>
#include <string>
#include "Customer.h"
#include "Vehicle.h"

using namespace std;

class Rental
{
private:
    Customer* customer;
    Vehicle* vehicle;
    int days;
    double cost;
    bool active;

public:
    Rental(Customer*, Vehicle*, int);

    void closeRental();

    bool isActive();

    void display();
};

#endif