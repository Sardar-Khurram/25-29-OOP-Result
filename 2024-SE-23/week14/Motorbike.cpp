#include "Motorbike.h"

Motorbike::Motorbike(string m, double rate, int cc)
    : Vehicle(m, rate)
{
    engineCC = cc;
}

double Motorbike::calculateCost(int days)
{
    double cost = dailyRate * days;

    if(days > 7)
        cost = cost - (cost * 0.10);

    return cost;
}

void Motorbike::display()
{
    Vehicle::display();

    cout << "Engine : " << engineCC << " cc" << endl;
}