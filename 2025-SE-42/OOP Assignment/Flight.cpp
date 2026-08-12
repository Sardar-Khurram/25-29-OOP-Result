#include "Flight.h"

// Constructor
Flight::Flight(string fNum, string org, string dest,
               string date, string time, int seats)
{
    flightNumber   = fNum;
    origin         = org;
    destination    = dest;
    departureDate  = date;
    departureTime  = time;
    totalSeats     = seats;
    availableSeats = seats;   // at start, all seats free
}

// --- Getters ---
string Flight::getFlightNumber()  const { return flightNumber; }
string Flight::getOrigin()        const { return origin; }
string Flight::getDestination()   const { return destination; }
string Flight::getDate()          const { return departureDate; }
string Flight::getTime()          const { return departureTime; }
int    Flight::getTotalSeats()    const { return totalSeats; }
int    Flight::getAvailableSeats()const { return availableSeats; }

// --- Setter ---
void Flight::setAvailableSeats(int s) {
    availableSeats = s;
}

// --- Operator << ---
ostream& operator<<(ostream& out, const Flight& f) {
    out << "[" << f.flightNumber << "] "
        << f.origin << " -> " << f.destination
        << " | Date: " << f.departureDate
        << " | Time: " << f.departureTime
        << " | Seats left: " << f.availableSeats
        << "/" << f.totalSeats;
    return out;
}

// Destructor
Flight::~Flight() {}
