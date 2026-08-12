#include "Car.h"

Car::Car(string m, double rate, int s)
    : Vehicle(m, rate)
{
    seats = s;
}

double Car::calculateCost(int days)
{
    return dailyRate * days;
}

void Car::display()
{
    cout << "Car Model: " << model << endl;
    cout << "Seats: " << seats << endl;
    cout << "Daily Rate: " << dailyRate << endl;
}
