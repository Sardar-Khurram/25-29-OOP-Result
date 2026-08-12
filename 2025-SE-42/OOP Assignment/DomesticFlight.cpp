#include "DomesticFlight.h"

DomesticFlight::DomesticFlight(string fNum, string org, string dest,
                                string date, string time, int seats,
                                string prov, double tax)
    : Flight(fNum, org, dest, date, time, seats)   // call parent constructor
{
    province = prov;
    taxRate  = tax;
}

string DomesticFlight::getProvince() const {
    return province;
}

// Domestic fare = flat base + tax
double DomesticFlight::calculateBaseFare() const {
    double baseFare = 5000.0;   // PKR base price
    return baseFare + (baseFare * taxRate);
}

void DomesticFlight::displayDetails() const {
    cout << *this << endl;      // uses operator<< from Flight
    cout << "  Type    : Domestic" << endl;
    cout << "  Province: " << province << endl;
    cout << "  Fare    : PKR " << calculateBaseFare() << endl;
}

DomesticFlight::~DomesticFlight() {}
