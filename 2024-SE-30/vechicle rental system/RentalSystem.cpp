#include "RentalSystem.h"

void RentalSystem::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
}

void RentalSystem::addCustomer(Customer* c)
{
    customers.push_back(c);
}

void RentalSystem::rentVehicle(Customer* c, Vehicle* v, int days)
{
    if(v->isAvailable())
    {
        Rental* rental = new Rental(c, v, days);

        rentals.push_back(rental);

        v->setAvailable(false);

        cout << c->getName()
             << " rented "
             << v->getModel()
             << " for "
             << days
             << " days.\n";
    }
    else
    {
        cout << "Vehicle already rented.\n";
    }
}

void RentalSystem::returnVehicle(Customer* c)
{
    for(size_t i = 0; i < rentals.size(); i++)
    {
        if(rentals[i]->customer == c &&
           rentals[i]->active)
        {
            rentals[i]->active = false;

            rentals[i]->vehicle->setAvailable(true);

            cout << c->getName()
                 << " returned "
                 << rentals[i]->vehicle->getModel()
                 << endl;
        }
    }
}

void RentalSystem::printSummary()
{
    int availableCount = 0;
    int rentedCount = 0;

    cout << "\n===== Active Rentals =====\n";

    for(size_t i = 0; i < rentals.size(); i++)
    {
        if(rentals[i]->active)
        {
            cout << "Customer: "
                 << rentals[i]->customer->getName()
                 << endl;

            cout << "Vehicle: "
                 << rentals[i]->vehicle->getModel()
                 << endl;

            cout << "Days: "
                 << rentals[i]->days
                 << endl;

            cout << "Cost: "
                 << rentals[i]->cost
                 << endl << endl;
        }
    }

    for(size_t i = 0; i < vehicles.size(); i++)
    {
        if(vehicles[i]->isAvailable())
            availableCount++;
        else
            rentedCount++;
    }

    cout << "Available Vehicles: "
         << availableCount << endl;

    cout << "Rented Vehicles: "
         << rentedCount << endl;
}
