#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<string>
using namespace std;

class Customer
{
private:
    string name;
    int customerID;
    bool hasRental;

public:
    Customer(string,int);

    string getName();

    int getID();

    bool isRenting();

    void setRental(bool);
};

#endif