#include "Truck.h"

Truck::Truck(string m, double rate, double payload)
    : Vehicle(m, rate)
{
    payloadCapacity = payload;
}

double Truck::calculateCost(int days)
{
    double cost = dailyRate * days;

    cost = cost + (cost * 0.20);

    return cost;
}

void Truck::display()
{
    cout << "Truck Model: " << model << endl;
    cout << "Payload Capacity: " << payloadCapacity << " tons" << endl;
    cout << "Daily Rate: " << dailyRate << endl;
}
