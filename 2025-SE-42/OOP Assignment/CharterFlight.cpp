#include "CharterFlight.h"

CharterFlight::CharterFlight(string fNum, string org, string dest,
                              string date, string time, int seats,
                              string holder, double fee)
    : Flight(fNum, org, dest, date, time, seats)
{
    contractHolder = holder;
    charterFlatFee = fee;
}

string CharterFlight::getContractHolder() const { return contractHolder; }
double CharterFlight::getCharterFlatFee() const { return charterFlatFee; }

// Charter fare = flat fee divided among all seats
double CharterFlight::calculateBaseFare() const {
    if (totalSeats == 0) return 0;
    return charterFlatFee / totalSeats;
}

void CharterFlight::displayDetails() const {
    cout << *this << endl;
    cout << "  Type           : Charter" << endl;
    cout << "  Contract Holder: " << contractHolder << endl;
    cout << "  Flat Fee       : PKR " << charterFlatFee << endl;
    cout << "  Per-Seat Fare  : PKR " << calculateBaseFare() << endl;
}

CharterFlight::~CharterFlight() {}
