#include "Car.h"

Car::Car(string m,double rate,int s)
:Vehicle(m,rate)
{
    seats=s;
}

double Car::calculateCost(int days)
{
    return dailyRate*days;
}

void Car::display()
{
    Vehicle::display();

    cout<<"Seats : "<<seats<<endl;
}