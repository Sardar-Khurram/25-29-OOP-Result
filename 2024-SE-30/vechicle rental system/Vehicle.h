#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string model;
    double dailyRate;
    bool available;

public:
    Vehicle(string m, double rate);

    virtual double calculateCost(int days);

    bool isAvailable();

    void setAvailable(bool status);

    string getModel();

    virtual void display();

    virtual ~Vehicle() {}
};

#endif
