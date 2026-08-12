#include "InternationalFlight.h"

InternationalFlight::InternationalFlight(string fNum, string org, string dest,
                                          string date, string time, int seats,
                                          string ctry, bool visa, double tax)
    : Flight(fNum, org, dest, date, time, seats)
{
    country         = ctry;
    visaRequired    = visa;
    internationalTax = tax;
}

string InternationalFlight::getCountry()     const { return country; }
bool   InternationalFlight::isVisaRequired() const { return visaRequired; }

// International fare = higher base + international tax
double InternationalFlight::calculateBaseFare() const {
    double baseFare = 50000.0;   // PKR base for international
    return baseFare + (baseFare * internationalTax);
}

void InternationalFlight::displayDetails() const {
    cout << *this << endl;
    cout << "  Type           : International" << endl;
    cout << "  Country        : " << country << endl;
    cout << "  Visa Required  : " << (visaRequired ? "Yes" : "No") << endl;
    cout << "  Fare           : PKR " << calculateBaseFare() << endl;
}

InternationalFlight::~InternationalFlight() {}
