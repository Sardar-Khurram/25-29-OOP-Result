#include "Vehicle.h"

Vehicle::Vehicle(string m, double rate)
{
    model = m;
    dailyRate = rate;
    available = true;
}

double Vehicle::calculateCost(int days)
{
    return dailyRate*days;
}

bool Vehicle::isAvailable()
{
    return available;
}

void Vehicle::setAvailable(bool status)
{
    available=status;
}

string Vehicle::getModel()
{
    return model;
}

void Vehicle::display()
{
    cout << "Model:"<< model << endl;
    cout << "Daily Rate:" << dailyRate << endl;
}
