#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
    string model;
    double dailyRate;
    bool available;

public:

    Vehicle(string m,double rate);

    virtual ~Vehicle(){}

    virtual double calculateCost(int days)=0;

    virtual void display();

    bool isAvailable();

    void rentVehicle();

    void returnVehicle();

    string getModel();
};

#endif