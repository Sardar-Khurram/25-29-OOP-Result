#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <string>
using namespace std;

// Base class — notice: NOT inheriting from std::exception
// This avoids the throw specifier conflict in Dev-C++ 5.11
class AirlineException {
protected:
    string message;
public:
    AirlineException(string msg) : message(msg) {}

    string getMessage() const {
        return message;
    }
};

// ---------------------------------------------
class FlightFullException : public AirlineException {
public:
    FlightFullException(string flightNumber)
        : AirlineException("Flight " + flightNumber +
                           " is fully booked. No seats available.") {}
};

// ---------------------------------------------
class InvalidCancellationException : public AirlineException {
public:
    InvalidCancellationException(string reason)
        : AirlineException("Invalid cancellation: " + reason) {}
};

// ---------------------------------------------
class FlightNotFoundException : public AirlineException {
public:
    FlightNotFoundException(string flightNumber)
        : AirlineException("Flight " + flightNumber + " not found.") {}
};

// ---------------------------------------------
class PassengerNotFoundException : public AirlineException {
public:
    PassengerNotFoundException(string passengerID)
        : AirlineException("Passenger ID " + passengerID + " not found.") {}
};

// ---------------------------------------------
class DuplicateBookingException : public AirlineException {
public:
    DuplicateBookingException(string name, string flightNum)
        : AirlineException("Passenger " + name +
                           " already has a ticket on flight " + flightNum) {}
};

#endif
