#include <iostream>
#include "InternationalFlight.h"

using namespace std;

InternationalFlight::InternationalFlight(
    string fn,
    string org,
    string dest,
    string date,
    int seats,
    bool visa,
    double tax,
    double fare
)
: Flight(fn, org, dest, date, seats)
{
    visaRequired = visa;
    internationalTax = tax;
    baseFare = fare;
}

double InternationalFlight::calculateFare()
{
    return baseFare + internationalTax;
}

void InternationalFlight::display()
{
    cout << "\n--- International Flight ---" << endl;
    cout << "Flight No        : " << FlightNo << endl;
    cout << "Origin           : " << Origin << endl;
    cout << "Destination      : " << Destination << endl;
    cout << "Departure Date   : " << DepartureDate << endl;
    cout << "Visa Required    : " << (visaRequired ? "Yes" : "No") << endl;
    cout << "International Tax: Rs " << internationalTax << endl;
    cout << "Total Fare       : Rs " << calculateFare() << endl;
    cout << "Available Seats  : " << AvailableSeats << "/" << TotalSeats << endl;
}
