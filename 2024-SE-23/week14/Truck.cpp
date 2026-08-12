#include "Truck.h"

Truck::Truck(string m, double rate, double p)
    : Vehicle(m, rate)
{
    payload = p;
}

double Truck::calculateCost(int days)
{
    double cost = dailyRate * days;

    cost = cost + (cost * 0.20);

    return cost;
}

void Truck::display()
{
    Vehicle::display();

    cout << "Payload : " << payload << " Tons" << endl;
}