//                                     ------OPEN ENDED LAB------

#include <iostream>

#include "RentalSystem.h"
#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"

using namespace std;

int main()
{
    RentalSystem system;

    Car* car1 = new Car("Honda Civic",5000,5);
    Motorbike* bike1 = new Motorbike("Honda 125",1000,125);
    Truck* truck1 = new Truck("Mazda Truck",8000,5);

    system.addVehicle(car1);
    system.addVehicle(bike1);
    system.addVehicle(truck1);

    Customer* c1 = new Customer("Ali",101);
    Customer* c2 = new Customer("Sara",102);

    system.addCustomer(c1);
    system.addCustomer(c2);

    system.rentVehicle(c1,car1,5);
    system.rentVehicle(c2,truck1,3);

    cout << "\nSummary After Renting\n";
    system.printSummary();

    return 0;
}