#include <iostream>
#include "EconomyPassenger.h"

using namespace std;

EconomyPassenger::EconomyPassenger(int id, string n)
: Passenger(id, n)
{
}

double EconomyPassenger::getRefundPercentage()
{
    return 50.0;
}

void EconomyPassenger::display()
{
    cout << "\nEconomy Passenger" << endl;
    cout << "Passenger ID     : " << passengerId << endl;
    cout << "Name             : " << name << endl;
    cout << "Refund Percentage: " << getRefundPercentage() << "%" << endl;
}
