#include "Passenger.h"
#include <iostream>
#include <sstream>

// ── Passenger (Base) ──────────────────────────────────────────────────────────

Passenger::Passenger(const std::string& id, const std::string& nm,
                     const std::string& em, const std::string& ph)
    : passengerID(id), name(nm), email(em), phone(ph), loyaltyPoints(0) {}

std::string Passenger::getPassengerID()   const { return passengerID; }
std::string Passenger::getName()          const { return name; }
std::string Passenger::getEmail()         const { return email; }
std::string Passenger::getPhone()         const { return phone; }
int         Passenger::getLoyaltyPoints() const { return loyaltyPoints; }

void Passenger::addLoyaltyPoints(double fare) {
    loyaltyPoints += static_cast<int>(fare * getLoyaltyMultiplier() / 10.0);
}

void Passenger::setLoyaltyPoints(int points) {
    loyaltyPoints = points;
}

std::ostream& operator<<(std::ostream& os, const Passenger& p) {
    os << "[" << p.getPassengerClass() << "] "
       << p.passengerID << " | " << p.name
       << " | " << p.email
       << " | " << p.phone
       << " | Points: " << p.loyaltyPoints;
    return os;
}

std::string Passenger::serialize() const {
    std::ostringstream oss;
    oss << passengerID << "|" << name << "|" << email
        << "|" << phone << "|" << loyaltyPoints;
    return oss.str();
}

// ── EconomyPassenger ──────────────────────────────────────────────────────────

EconomyPassenger::EconomyPassenger(const std::string& id, const std::string& nm,
                                   const std::string& em, const std::string& ph)
    : Passenger(id, nm, em, ph) {}

// Refund: >7 days = 50%, 3-7 days = 25%, <3 days = 0%
double EconomyPassenger::getCancellationRefundPercent(int days) const {
    if (days > 7)  return 50.0;
    if (days >= 3) return 25.0;
    return 0.0;
}

void EconomyPassenger::displayDetails() const {
    std::cout << "  [Economy Passenger]\n"
              << "  ID      : " << passengerID << "\n"
              << "  Name    : " << name << "\n"
              << "  Email   : " << email << "\n"
              << "  Phone   : " << phone << "\n"
              << "  Baggage : 20 kg  |  Loyalty: 1x  |  Points: " << loyaltyPoints << "\n";
}

std::string EconomyPassenger::serialize() const {
    return "Economy|" + Passenger::serialize();
}

// ── BusinessPassenger ─────────────────────────────────────────────────────────

BusinessPassenger::BusinessPassenger(const std::string& id, const std::string& nm,
                                     const std::string& em, const std::string& ph)
    : Passenger(id, nm, em, ph) {}

// Refund: >5 days = 75%, 2-5 days = 50%, <2 days = 20%
double BusinessPassenger::getCancellationRefundPercent(int days) const {
    if (days > 5)  return 75.0;
    if (days >= 2) return 50.0;
    return 20.0;
}

void BusinessPassenger::displayDetails() const {
    std::cout << "  [Business Passenger]\n"
              << "  ID      : " << passengerID << "\n"
              << "  Name    : " << name << "\n"
              << "  Email   : " << email << "\n"
              << "  Phone   : " << phone << "\n"
              << "  Baggage : 40 kg  |  Loyalty: 2x  |  Points: " << loyaltyPoints << "\n";
}

std::string BusinessPassenger::serialize() const {
    return "Business|" + Passenger::serialize();
}

// ── FirstClassPassenger ───────────────────────────────────────────────────────

FirstClassPassenger::FirstClassPassenger(const std::string& id, const std::string& nm,
                                         const std::string& em, const std::string& ph)
    : Passenger(id, nm, em, ph) {}

// Refund: >3 days = 90%, 1-3 days = 70%, <1 day = 40%
double FirstClassPassenger::getCancellationRefundPercent(int days) const {
    if (days > 3)  return 90.0;
    if (days >= 1) return 70.0;
    return 40.0;
}

void FirstClassPassenger::displayDetails() const {
    std::cout << "  [First Class Passenger]\n"
              << "  ID      : " << passengerID << "\n"
              << "  Name    : " << name << "\n"
              << "  Email   : " << email << "\n"
              << "  Phone   : " << phone << "\n"
              << "  Baggage : 60 kg  |  Loyalty: 3x  |  Points: " << loyaltyPoints << "\n";
}

std::string FirstClassPassenger::serialize() const {
    return "FirstClass|" + Passenger::serialize();
}
