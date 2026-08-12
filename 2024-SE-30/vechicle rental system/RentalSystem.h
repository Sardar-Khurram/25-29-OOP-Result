#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include <vector>
#include "Vehicle.h"
#include "Customer.h"
#include "Rental.h"

class RentalSystem
{
private:
    vector<Vehicle*> vehicles;
    vector<Customer*> customers;
    vector<Rental*> rentals;

public:
    void addVehicle(Vehicle* v);

    void addCustomer(Customer* c);

    void rentVehicle(Customer* c, Vehicle* v, int days);

    void returnVehicle(Customer* c);

    void printSummary();
};

#endif
