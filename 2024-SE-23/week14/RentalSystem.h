#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include <iostream>
#include <vector>

#include "Vehicle.h"
#include "Customer.h"
#include "Rental.h"

using namespace std;

class RentalSystem
{
private:
    vector<Vehicle*> vehicles;
    vector<Customer*> customers;
    vector<Rental*> rentals;

public:
    void addVehicle(Vehicle*);

    void addCustomer(Customer*);

    void rentVehicle(Customer*,Vehicle*,int);

    void returnVehicle(Rental*);

    void printSummary();
};

#endif