#include <iostream>
#include "CharterFlight.h"

using namespace std;

CharterFlight::CharterFlight(
    string fn,
    string org,
    string dest,
    string date,
    int seats,
    string holder,
    double fare
)
: Flight(fn, org, dest, date, seats)
{
    contractHolder = holder;
    charterFare = fare;
}

double CharterFlight::calculateFare()
{
    return charterFare;
}

void CharterFlight::display()
{
    cout << "\n--- Charter Flight ---" << endl;
    cout << "Flight No        : " << FlightNo << endl;
    cout << "Origin           : " << Origin << endl;
    cout << "Destination      : " << Destination << endl;
    cout << "Departure Date   : " << DepartureDate << endl;
    cout << "Contract Holder  : " << contractHolder << endl;
    cout << "Charter Fare     : Rs " << calculateFare() << endl;
    cout << "Available Seats  : " << AvailableSeats << "/" << TotalSeats << endl;
}
