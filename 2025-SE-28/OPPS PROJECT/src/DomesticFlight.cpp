#include <iostream>
#include "DomesticFlight.h"

using namespace std;

DomesticFlight::DomesticFlight(
    string fn,
    string org,
    string dest,
    string date,
    int seats,
    double fare
)
: Flight(fn, org, dest, date, seats)
{
    baseFare = fare;
}

double DomesticFlight::calculateFare()
{
    return baseFare;
}

void DomesticFlight::display()
{
    cout << "\n--- Domestic Flight ---" << endl;
    cout << "Flight No        : " << FlightNo << endl;
    cout << "Origin           : " << Origin << endl;
    cout << "Destination      : " << Destination << endl;
    cout << "Departure Date   : " << DepartureDate << endl;
    cout << "Base Fare        : Rs " << calculateFare() << endl;
    cout << "Available Seats  : " << AvailableSeats << "/" << TotalSeats << endl;
}
