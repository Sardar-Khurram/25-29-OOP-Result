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
    if(!v->isAvailable())
    {
        cout<<"Vehicle already rented!"<<endl;
        return;
    }

    if(c->isRenting())
    {
        cout<<"Customer already has a rental!"<<endl;
        return;
    }

    Rental* r = new Rental(c,v,days);

    rentals.push_back(r);
}

void RentalSystem::returnVehicle(Rental* r)
{
    r->closeRental();
}

void RentalSystem::printSummary()
{
    int available=0;
    int rented=0;

    cout<<"\n===== ACTIVE RENTALS =====\n"<<endl;

    for(int i=0;i<rentals.size();i++)
    {
        if(rentals[i]->isActive())
            rentals[i]->display();
    }

    for(int i=0;i<vehicles.size();i++)
    {
        if(vehicles[i]->isAvailable())
            available++;
        else
            rented++;
    }

    cout<<"Available Vehicles : "<<available<<endl;
    cout<<"Rented Vehicles    : "<<rented<<endl;
}