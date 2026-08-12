#include "Rental.h"

Rental::Rental(Customer* c, Vehicle* v, int d)
{
    customer = c;
    vehicle = v;
    days = d;

    cost = vehicle->calculateCost(days);

    active = true;

    vehicle->rentVehicle();

    customer->setRental(true);
}

void Rental::closeRental()
{
    active = false;

    vehicle->returnVehicle();

    customer->setRental(false);
}

bool Rental::isActive()
{
    return active;
}

void Rental::display()
{
    cout << "Customer : " << customer->getName() << endl;
    cout << "Vehicle  : " << vehicle->getModel() << endl;
    cout << "Days     : " << days << endl;
    cout << "Cost     : " << cost << endl;

    if(active)
        cout << "Status   : Active" << endl;
    else
        cout << "Status   : Closed" << endl;

    cout << "------------------------" << endl;
}