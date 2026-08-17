#include "Flight.h"
#include <iomanip>
#include <sstream>

Flight::Flight(const std::string& flightNo, const std::string& orig,
               const std::string& dest, const std::string& date,
               const std::string& time, int seats)
    : flightNumber(flightNo), origin(orig), destination(dest),
      departureDate(date), departureTime(time),
      totalSeats(seats), availableSeats(seats) {}

std::string Flight::getFlightNumber()  const { return flightNumber; }
std::string Flight::getOrigin()        const { return origin; }
std::string Flight::getDestination()   const { return destination; }
std::string Flight::getDepartureDate() const { return departureDate; }
std::string Flight::getDepartureTime() const { return departureTime; }
int         Flight::getTotalSeats()    const { return totalSeats; }
int         Flight::getAvailableSeats()const { return availableSeats; }

double Flight::getOccupancyPercentage() const {
    if (totalSeats == 0) return 0.0;
    return static_cast<double>(totalSeats - availableSeats) / totalSeats * 100.0;
}

bool Flight::bookSeat() {
    if (availableSeats <= 0) return false;
    --availableSeats;
    return true;
}

bool Flight::cancelSeat() {
    if (availableSeats >= totalSeats) return false;
    ++availableSeats;
    return true;
}

std::ostream& operator<<(std::ostream& os, const Flight& f) {
    os << "[" << f.getFlightType() << "] "
       << f.flightNumber << " | "
       << f.origin << " -> " << f.destination
       << " | " << f.departureDate << " " << f.departureTime
       << " | Seats: " << f.availableSeats << "/" << f.totalSeats
       << " | Fare: $" << std::fixed << std::setprecision(2) << f.calculateBaseFare();
    return os;
}

std::string Flight::serialize() const {
    std::ostringstream oss;
    oss << flightNumber << "|" << origin << "|" << destination << "|"
        << departureDate << "|" << departureTime << "|"
        << totalSeats << "|" << availableSeats;
    return oss.str();
}
