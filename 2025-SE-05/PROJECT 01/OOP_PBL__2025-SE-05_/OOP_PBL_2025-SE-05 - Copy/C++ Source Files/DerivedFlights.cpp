#include "DerivedFlights.h"
#include <iostream>
#include <iomanip>
#include <sstream>

// ── DomesticFlight ────────────────────────────────────────────────────────────

DomesticFlight::DomesticFlight(const std::string& flightNo, const std::string& orig,
                               const std::string& dest, const std::string& date,
                               const std::string& time, int seats,
                               const std::string& reg, double tax)
    : Flight(flightNo, orig, dest, date, time, seats), region(reg), taxRate(tax) {}

double DomesticFlight::calculateBaseFare() const {
    double base = 50.0 + (totalSeats * 0.5);
    return base * (1.0 + taxRate / 100.0);
}

void DomesticFlight::displayDetails() const {
    std::cout << std::fixed << std::setprecision(2)
              << "  [Domestic Flight]\n"
              << "  Flight No  : " << flightNumber << "\n"
              << "  Route      : " << origin << " -> " << destination << "\n"
              << "  Date/Time  : " << departureDate << " at " << departureTime << "\n"
              << "  Region     : " << region << "\n"
              << "  Tax Rate   : " << taxRate << "%\n"
              << "  Seats      : " << availableSeats << " / " << totalSeats << "\n"
              << "  Base Fare  : $" << calculateBaseFare() << "\n";
}

std::string DomesticFlight::serialize() const {
    std::ostringstream oss;
    oss << "Domestic|" << Flight::serialize() << "|" << region << "|" << taxRate;
    return oss.str();
}

// ── InternationalFlight ───────────────────────────────────────────────────────

InternationalFlight::InternationalFlight(const std::string& flightNo, const std::string& orig,
                                         const std::string& dest, const std::string& date,
                                         const std::string& time, int seats,
                                         const std::string& ctry, bool visaReq, double sur)
    : Flight(flightNo, orig, dest, date, time, seats),
      country(ctry), visaRequired(visaReq), surcharge(sur) {}

double InternationalFlight::calculateBaseFare() const {
    return 200.0 + (totalSeats * 1.5) + surcharge;
}

void InternationalFlight::displayDetails() const {
    std::cout << std::fixed << std::setprecision(2)
              << "  [International Flight]\n"
              << "  Flight No  : " << flightNumber << "\n"
              << "  Route      : " << origin << " -> " << destination << "\n"
              << "  Date/Time  : " << departureDate << " at " << departureTime << "\n"
              << "  Country    : " << country << "\n"
              << "  Visa Req.  : " << (visaRequired ? "Yes" : "No") << "\n"
              << "  Surcharge  : $" << surcharge << "\n"
              << "  Seats      : " << availableSeats << " / " << totalSeats << "\n"
              << "  Base Fare  : $" << calculateBaseFare() << "\n";
}

std::string InternationalFlight::serialize() const {
    std::ostringstream oss;
    oss << "International|" << Flight::serialize()
        << "|" << country << "|" << (visaRequired ? 1 : 0) << "|" << surcharge;
    return oss.str();
}

// ── CharterFlight ─────────────────────────────────────────────────────────────

CharterFlight::CharterFlight(const std::string& flightNo, const std::string& orig,
                             const std::string& dest, const std::string& date,
                             const std::string& time, int seats,
                             const std::string& holder, double fee)
    : Flight(flightNo, orig, dest, date, time, seats),
      contractHolder(holder), charterFee(fee) {}

double CharterFlight::calculateBaseFare() const {
    return (charterFee / totalSeats) + 100.0;
}

void CharterFlight::displayDetails() const {
    std::cout << std::fixed << std::setprecision(2)
              << "  [Charter Flight]\n"
              << "  Flight No  : " << flightNumber << "\n"
              << "  Route      : " << origin << " -> " << destination << "\n"
              << "  Date/Time  : " << departureDate << " at " << departureTime << "\n"
              << "  Contractor : " << contractHolder << "\n"
              << "  Charter Fee: $" << charterFee << "\n"
              << "  Seats      : " << availableSeats << " / " << totalSeats << "\n"
              << "  Per-Seat   : $" << calculateBaseFare() << "\n";
}

std::string CharterFlight::serialize() const {
    std::ostringstream oss;
    oss << "Charter|" << Flight::serialize() << "|" << contractHolder << "|" << charterFee;
    return oss.str();
}
