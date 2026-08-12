#include "BusinessPassenger.h"

BusinessPassenger::BusinessPassenger(string id, string nm,
                                      string email, string phone, bool lounge)
    : Passenger(id, nm, email, phone)
{
    loungeAccess = lounge;
}

double BusinessPassenger::getBaggageAllowance()  const { return 35.0; }
double BusinessPassenger::getLoyaltyMultiplier() const { return 1.5; }
double BusinessPassenger::getRefundPercentage()  const { return 0.75; }
string BusinessPassenger::getPassengerClass()    const { return "Business"; }

void BusinessPassenger::displayDetails() const {
    cout << *this << endl;
    cout << "  Class        : Business" << endl;
    cout << "  Baggage      : 35 KG" << endl;
    cout << "  Lounge Access: " << (loungeAccess ? "Yes" : "No") << endl;
    cout << "  Refund       : 75% if cancelled" << endl;
}

BusinessPassenger::~BusinessPassenger() {}
