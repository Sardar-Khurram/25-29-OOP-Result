#include <iostream>
#include "BusinessPassenger.h"

using namespace std;

BusinessPassenger::BusinessPassenger(int id, string n)
: Passenger(id, n)
{
}

double BusinessPassenger::getRefundPercentage()
{
    return 75.0;
}

void BusinessPassenger::display()
{
    cout << "\nBusiness Passenger" << endl;
    cout << "Passenger ID     : " << passengerId << endl;
    cout << "Name             : " << name << endl;
    cout << "Refund Percentage: " << getRefundPercentage() << "%" << endl;
}
