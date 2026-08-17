#include "Airline.h"
#include "DerivedFlights.h"
#include "Exceptions.h"
#include "SearchUtils.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>

Airline::Airline(const std::string& name) : airlineName(name) {}

// ── Flight Management ─────────────────────────────────────────────────────────

void Airline::addFlight(std::unique_ptr<Flight> flight) {
    flights.push_back(std::move(flight));
    std::cout << "  [OK] Flight added.\n";
}

bool Airline::removeFlight(const std::string& flightNo) {
    auto it = std::find_if(flights.begin(), flights.end(),
        [&](const std::unique_ptr<Flight>& f) {
            return f->getFlightNumber() == flightNo;
        });
    if (it == flights.end()) return false;
    flights.erase(it);
    return true;
}

Flight* Airline::searchFlightByNumber(const std::string& flightNo) const {
    return findFirst<Flight>(flights, [&](const Flight* f) {
        return f->getFlightNumber() == flightNo;
    });
}

std::vector<Flight*> Airline::searchFlightsByRoute(const std::string& orig,
                                                    const std::string& dest) const {
    return findAll<Flight>(flights, [&](const Flight* f) {
        return f->getOrigin() == orig && f->getDestination() == dest;
    });
}

std::vector<Flight*> Airline::searchFlightsByDate(const std::string& date) const {
    return findAll<Flight>(flights, [&](const Flight* f) {
        return f->getDepartureDate() == date;
    });
}

void Airline::listAllFlights() const {
    if (flights.empty()) { std::cout << "  No flights registered.\n"; return; }
    std::cout << "\n  All Flights (" << flights.size() << "):\n";
    for (const auto& f : flights)
        std::cout << "  " << *f << "\n";
}

// ── Passenger Management ──────────────────────────────────────────────────────

void Airline::addPassenger(std::unique_ptr<Passenger> passenger) {
    passengers.push_back(std::move(passenger));
    std::cout << "  [OK] Passenger registered.\n";
}

bool Airline::removePassenger(const std::string& passengerID) {
    auto it = std::find_if(passengers.begin(), passengers.end(),
        [&](const std::unique_ptr<Passenger>& p) {
            return p->getPassengerID() == passengerID;
        });
    if (it == passengers.end()) return false;
    passengers.erase(it);
    return true;
}

Passenger* Airline::searchPassenger(const std::string& passengerID) const {
    return findFirst<Passenger>(passengers, [&](const Passenger* p) {
        return p->getPassengerID() == passengerID;
    });
}

void Airline::viewBookingHistory(const std::string& passengerID) const {
    Passenger* p = searchPassenger(passengerID);
    if (!p) throw NotFoundException("Passenger " + passengerID);

    std::cout << "\n  Booking History for " << p->getName() << ":\n";
    bool found = false;
    for (const auto& t : tickets) {
        if (t->getPassengerID() == passengerID) {
            std::cout << "  " << *t << "\n";
            found = true;
        }
    }
    if (!found) std::cout << "  No bookings found.\n";
}

void Airline::listAllPassengers() const {
    if (passengers.empty()) { std::cout << "  No passengers registered.\n"; return; }
    std::cout << "\n  All Passengers (" << passengers.size() << "):\n";
    for (const auto& p : passengers)
        std::cout << "  " << *p << "\n";
}

// ── Booking ───────────────────────────────────────────────────────────────────

std::string Airline::assignSeat(const Flight* flight) const {
    int confirmed = 0;
    for (const auto& t : tickets)
        if (t->getFlightNumber() == flight->getFlightNumber() &&
            t->getStatus() == BookingStatus::CONFIRMED)
            ++confirmed;
    return "S" + std::to_string(confirmed + 1);
}

Ticket* Airline::bookTicket(const std::string& passengerID, const std::string& flightNo) {
    Passenger* p = searchPassenger(passengerID);
    if (!p) throw NotFoundException("Passenger " + passengerID);

    Flight* f = searchFlightByNumber(flightNo);
    if (!f) throw NotFoundException("Flight " + flightNo);

    // Prevent duplicate booking on the same flight
    for (const auto& t : tickets)
        if (t->getPassengerID() == passengerID &&
            t->getFlightNumber() == flightNo &&
            t->getStatus() == BookingStatus::CONFIRMED)
            throw DuplicateBookingException(passengerID, flightNo);

    if (f->getAvailableSeats() <= 0)
        throw FlightFullException(flightNo);

    double fare = f->calculateBaseFare();
    auto ticket = std::make_unique<Ticket>(passengerID, flightNo, assignSeat(f), fare);
    Ticket* raw = ticket.get();

    tickets.push_back(std::move(ticket));
    f->bookSeat();
    flightRevenue[flightNo] += fare;
    p->addLoyaltyPoints(fare);

    return raw;
}

// ── Cancellation ──────────────────────────────────────────────────────────────

double Airline::cancelTicket(const std::string& ticketID, int daysBeforeDeparture) {
    Ticket* tkt = findFirst<Ticket>(tickets, [&](const Ticket* t) {
        return t->getTicketID() == ticketID;
    });
    if (!tkt) throw NotFoundException("Ticket " + ticketID);

    if (tkt->getStatus() == BookingStatus::CANCELLED)
        throw InvalidCancellationException("ticket is already cancelled.");

    if (daysBeforeDeparture < 0)
        throw InvalidCancellationException("days before departure cannot be negative.");

    Passenger* p = searchPassenger(tkt->getPassengerID());
    if (!p) throw NotFoundException("Passenger " + tkt->getPassengerID());

    double refundPct = p->getCancellationRefundPercent(daysBeforeDeparture);
    double refund    = tkt->getFarePaid() * refundPct / 100.0;

    tkt->cancel();

    Flight* f = searchFlightByNumber(tkt->getFlightNumber());
    if (f) f->cancelSeat();

    flightRevenue[tkt->getFlightNumber()] -= tkt->getFarePaid();
    return refund;
}

// ── Reports ───────────────────────────────────────────────────────────────────

void Airline::reportTodaysDepartures(const std::string& today) const {
    std::cout << "\n  Today's Departures (" << today << "):\n";
    bool found = false;
    for (const auto& f : flights)
        if (f->getDepartureDate() == today) {
            std::cout << "  " << *f << "\n";
            found = true;
        }
    if (!found) std::cout << "  No departures today.\n";
}

void Airline::reportOccupancyPerFlight() const {
    if (flights.empty()) { std::cout << "  No flights.\n"; return; }

    // Sort a copy by occupancy, highest first
    std::vector<Flight*> sorted;
    for (const auto& f : flights) sorted.push_back(f.get());
    std::sort(sorted.begin(), sorted.end(), [](const Flight* a, const Flight* b) {
        return a->getOccupancyPercentage() > b->getOccupancyPercentage();
    });

    std::cout << "\n  Occupancy Per Flight:\n" << std::fixed << std::setprecision(1);
    for (const auto* f : sorted) {
        int booked = f->getTotalSeats() - f->getAvailableSeats();
        std::cout << "  " << f->getFlightNumber()
                  << " | " << f->getOrigin() << " -> " << f->getDestination()
                  << " | " << booked << "/" << f->getTotalSeats()
                  << " | " << f->getOccupancyPercentage() << "%\n";
    }
}

void Airline::reportTop5RevenueFlights() const {
    if (flightRevenue.empty()) { std::cout << "  No revenue data.\n"; return; }

    std::vector<std::pair<std::string, double>> rev(flightRevenue.begin(), flightRevenue.end());
    std::sort(rev.begin(), rev.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    std::cout << "\n  Top 5 Revenue Flights:\n" << std::fixed << std::setprecision(2);
    for (int i = 0; i < 5 && i < static_cast<int>(rev.size()); ++i)
        std::cout << "  " << (i + 1) << ". " << rev[i].first
                  << "  $" << rev[i].second << "\n";
}

// ── File Persistence ──────────────────────────────────────────────────────────

void Airline::saveToFile(const std::string& filename) const {
	
	system("mkdir data");
	
    std::ofstream file(filename);
    if (!file.is_open())
        throw std::runtime_error("Cannot open file: " + filename);

    file << "COUNTER|" << Ticket::getCounter() << "\n";

    for (const auto& f : flights)    file << "FLIGHT|"    << f->serialize()  << "\n";
    for (const auto& p : passengers) file << "PASSENGER|" << p->serialize()  << "\n";
    for (const auto& t : tickets)    file << "TICKET|"    << t->serialize()  << "\n";
    for (const auto& r : flightRevenue)
        file << "REVENUE|" << r.first << "|" << r.second << "\n";

    std::cout << "  [OK] Saved to " << filename << "\n";
}

void Airline::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "  No saved data found. Starting fresh.\n";
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;
        std::istringstream ss(line);
        std::string tag;
        std::getline(ss, tag, '|');

        if (tag == "COUNTER") {
            std::string val; std::getline(ss, val);
            Ticket::setCounter(std::stoi(val));
        }
        else if (tag == "FLIGHT") {
            std::string type; std::getline(ss, type, '|');
            std::string fno, orig, dest, date, time, tsStr, asStr;
            std::getline(ss, fno,   '|');
            std::getline(ss, orig,  '|');
            std::getline(ss, dest,  '|');
            std::getline(ss, date,  '|');
            std::getline(ss, time,  '|');
            std::getline(ss, tsStr, '|');
            std::getline(ss, asStr, '|');
            int ts = std::stoi(tsStr);
            int as = std::stoi(asStr);

            std::unique_ptr<Flight> f;
            if (type == "Domestic") {
                std::string region, taxStr;
                std::getline(ss, region, '|'); std::getline(ss, taxStr, '|');
                f = std::make_unique<DomesticFlight>(fno, orig, dest, date, time,
                                                     ts, region, std::stod(taxStr));
            } else if (type == "International") {
                std::string country, visaStr, surStr;
                std::getline(ss, country, '|');
                std::getline(ss, visaStr, '|');
                std::getline(ss, surStr,  '|');
                f = std::make_unique<InternationalFlight>(fno, orig, dest, date, time,
                        ts, country, visaStr == "1", std::stod(surStr));
            } else if (type == "Charter") {
                std::string holder, feeStr;
                std::getline(ss, holder, '|'); std::getline(ss, feeStr, '|');
                f = std::make_unique<CharterFlight>(fno, orig, dest, date, time,
                                                    ts, holder, std::stod(feeStr));
            }
            if (f) {
                // Restore booked seats (availableSeats was saved, not derived)
                for (int i = 0; i < ts - as; ++i) f->bookSeat();
                flights.push_back(std::move(f));
            }
        }
        else if (tag == "PASSENGER") {
            std::string cls, id, name, email, phone, lpStr;
            std::getline(ss, cls,   '|');
            std::getline(ss, id,    '|');
            std::getline(ss, name,  '|');
            std::getline(ss, email, '|');
            std::getline(ss, phone, '|');
            std::getline(ss, lpStr, '|');

            std::unique_ptr<Passenger> p;
            if (cls == "Economy")
                p = std::make_unique<EconomyPassenger>(id, name, email, phone);
            else if (cls == "Business")
                p = std::make_unique<BusinessPassenger>(id, name, email, phone);
            else
                p = std::make_unique<FirstClassPassenger>(id, name, email, phone);

            p->setLoyaltyPoints(std::stoi(lpStr));  // BUG FIX: properly restore points
            passengers.push_back(std::move(p));
        }
        else if (tag == "TICKET") {
            std::string tickID, passID, flightNo, seat, fareStr, statusStr;
            std::getline(ss, tickID,    '|');
            std::getline(ss, passID,    '|');
            std::getline(ss, flightNo,  '|');
            std::getline(ss, seat,      '|');
            std::getline(ss, fareStr,   '|');
            std::getline(ss, statusStr, '|');
            BookingStatus st = (statusStr == "CONFIRMED")
                               ? BookingStatus::CONFIRMED : BookingStatus::CANCELLED;
            tickets.push_back(std::make_unique<Ticket>(tickID, passID, flightNo,
                                                       seat, std::stod(fareStr), st));
        }
        else if (tag == "REVENUE") {
            std::string flightNo, revStr;
            std::getline(ss, flightNo, '|');
            std::getline(ss, revStr,   '|');
            flightRevenue[flightNo] = std::stod(revStr);
        }
    }
    std::cout << "  [OK] Data loaded from " << filename << "\n";
}
