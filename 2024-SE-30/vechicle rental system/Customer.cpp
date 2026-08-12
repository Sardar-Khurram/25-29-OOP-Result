#include "Customer.h"

Customer::Customer(string n, int id)
{
    name = n;
    customerID = id;
}

string Customer::getName()
{
    return name;
}

int Customer::getID()
{
    return customerID;
}
