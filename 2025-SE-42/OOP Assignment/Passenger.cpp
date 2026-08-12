#include "Passenger.h"

Passenger::Passenger(string id, string nm, string eml, string ph) {
    passengerID   = id;
    name          = nm;
    email         = eml;
    phone         = ph;
    loyaltyPoints = 0;    // starts at zero
}

string Passenger::getName()         const { return name; }
string Passenger::getPassengerID()  const { return passengerID; }
string Passenger::getEmail()        const { return email; }
string Passenger::getPhone()        const { return phone; }
int    Passenger::getLoyaltyPoints()const { return loyaltyPoints; }

void Passenger::addLoyaltyPoints(int pts) {
    loyaltyPoints += pts;
}

ostream& operator<<(ostream& out, const Passenger& p) {
    out << "[" << p.passengerID << "] "
        << p.name
        << " | Email: " << p.email
        << " | Phone: " << p.phone
        << " | Loyalty Pts: " << p.loyaltyPoints;
    return out;
}

Passenger::~Passenger() {}
