#include "FirstClassPassenger.h"

FirstClassPassenger::FirstClassPassenger(string id, string nm,
                                          string email, string phone, string host)
    : Passenger(id, nm, email, phone)
{
    dedicatedHost = host;
}

double FirstClassPassenger::getBaggageAllowance()  const { return 50.0; }
double FirstClassPassenger::getLoyaltyMultiplier() const { return 2.0; }
double FirstClassPassenger::getRefundPercentage()  const { return 0.90; }
string FirstClassPassenger::getPassengerClass()    const { return "First Class"; }

void FirstClassPassenger::displayDetails() const {
    cout << *this << endl;
    cout << "  Class         : First Class" << endl;
    cout << "  Baggage       : 50 KG" << endl;
    cout << "  Dedicated Host: " << dedicatedHost << endl;
    cout << "  Refund        : 90% if cancelled" << endl;
}

FirstClassPassenger::~FirstClassPassenger() {}
