#include "EconomyPassenger.h"

EconomyPassenger::EconomyPassenger(string id, string nm,
                                    string email, string phone, bool meal)
    : Passenger(id, nm, email, phone)
{
    mealIncluded = meal;
}

double EconomyPassenger::getBaggageAllowance()  const { return 20.0; }
double EconomyPassenger::getLoyaltyMultiplier() const { return 1.0; }
double EconomyPassenger::getRefundPercentage()  const { return 0.50; }
string EconomyPassenger::getPassengerClass()    const { return "Economy"; }

void EconomyPassenger::displayDetails() const {
    cout << *this << endl;
    cout << "  Class   : Economy" << endl;
    cout << "  Baggage : 20 KG" << endl;
    cout << "  Meal    : " << (mealIncluded ? "Yes" : "No") << endl;
    cout << "  Refund  : 50% if cancelled" << endl;
}

EconomyPassenger::~EconomyPassenger() {}
