#include "Customer.h"

Customer::Customer(string n,int id)
{
    name=n;
    customerID=id;
    hasRental=false;
}

string Customer::getName()
{
    return name;
}

int Customer::getID()
{
    return customerID;
}

bool Customer::isRenting()
{
    return hasRental;
}

void Customer::setRental(bool status)
{
    hasRental=status;
}