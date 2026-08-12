#include "Vehicle.h"

Vehicle::Vehicle(string m,double rate)
{
    model=m;
    dailyRate=rate;
    available=true;
}

bool Vehicle::isAvailable()
{
    return available;
}

void Vehicle::rentVehicle()
{
    available=false;
}

void Vehicle::returnVehicle()
{
    available=true;
}

string Vehicle::getModel()
{
    return model;
}

void Vehicle::display()
{
    cout<<"Model : "<<model<<endl;
    cout<<"Daily Rate : "<<dailyRate<<endl;

    if(available)
        cout<<"Status : Available"<<endl;
    else
        cout<<"Status : Rented"<<endl;
}