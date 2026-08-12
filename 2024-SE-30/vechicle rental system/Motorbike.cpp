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
    {
        cost = cost - (cost * 0.10);
    }

    return cost;
}

void Motorbike::display()
{
    cout << "Motorbike Model: " << model << endl;
    cout << "Engine CC: " << engineCC << endl;
    cout << "Daily Rate: " << dailyRate << endl;
}
