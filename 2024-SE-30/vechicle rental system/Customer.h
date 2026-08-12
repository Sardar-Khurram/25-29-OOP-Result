#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    string name;
    int customerID;

public:
    Customer(string n, int id);

    string getName();

    int getID();
};

#endif
