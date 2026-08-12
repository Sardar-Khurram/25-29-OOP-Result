#include <iostream>
#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include "Customer.h"
#include "Rental.h"
#include "RentalSystem.h"

using namespace std;

int main()
{
    RentalSystem system;

    // Vehicles
    Car car1("Toyota Corolla", 5000, 5);
    Motorbike bike1("Honda 125", 1500, 125);
    Truck truck1("Hino Truck", 8000, 10);

    // Customers
    Customer c1("Ali", 101);
    Customer c2("Sara", 102);

    // Add Vehicles
    system.addVehicle(&car1);
    system.addVehicle(&bike1);
    system.addVehicle(&truck1);

    // Add Customers
    system.addCustomer(&c1);
    system.addCustomer(&c2);

    // Rentals
    system.rentVehicle(&c1, &car1, 5);
    system.rentVehicle(&c2, &truck1, 3);

    // Return Vehicle
    system.returnVehicle(&c1);

    // Summary
    system.printSummary();

    return 0;
}
