#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
using namespace std;

class Passenger
{
protected:
    int passengerId;
    string name;

public:

    Passenger(int id = 0, string n = "")
    {
        passengerId = id;
        name = n;
    }

    virtual double getRefundPercentage() = 0;

    virtual void display() = 0;

    int getId()
    {
        return passengerId;
    }

    string getName()
    {
        return name;
    }

    virtual ~Passenger() {}
};

#endif
