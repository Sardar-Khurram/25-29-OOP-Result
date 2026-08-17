#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <stdexcept>
#include <string>

// Thrown when a flight has no available seats
class FlightFullException : public std::runtime_error {
public:
    explicit FlightFullException(const std::string& flightNo)
        : std::runtime_error("Flight " + flightNo + " is fully booked.") {}
};

// Thrown when a cancellation request is invalid
class InvalidCancellationException : public std::runtime_error {
public:
    explicit InvalidCancellationException(const std::string& reason)
        : std::runtime_error("Cannot cancel: " + reason) {}
};

// Thrown when a passenger tries to book the same flight twice
class DuplicateBookingException : public std::runtime_error {
public:
    DuplicateBookingException(const std::string& passengerID, const std::string& flightNo)
        : std::runtime_error("Passenger " + passengerID +
                             " already has a confirmed ticket on flight " + flightNo + ".") {}
};

// Thrown when a flight, passenger, or ticket is not found
class NotFoundException : public std::runtime_error {
public:
    explicit NotFoundException(const std::string& what)
        : std::runtime_error(what + " not found.") {}
};

#endif
