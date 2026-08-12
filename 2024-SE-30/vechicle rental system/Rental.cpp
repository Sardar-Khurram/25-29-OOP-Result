#include "Rental.h"

Rental::Rental(Customer* c, Vehicle* v, int d)
{
    customer = c;
    vehicle = v;
    days = d;

    cost = vehicle->calculateCost(days);

    active = true;
}
