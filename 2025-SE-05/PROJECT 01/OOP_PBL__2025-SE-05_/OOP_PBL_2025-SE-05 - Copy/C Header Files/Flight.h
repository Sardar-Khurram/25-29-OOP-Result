#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <iostream>

// Abstract base class for all flight types.
// Derived classes must implement calculateBaseFare(), displayDetails(), getFlightType().
class Flight {
protected:
    std::string flightNumber;
    std::string origin;
    std::string destination;
    std::string departureDate;   // YYYY-MM-DD
    std::string departureTime;   // HH:MM
    int totalSeats;
    int availableSeats;

public:
    Flight(const std::string& flightNo, const std::string& orig,
           const std::string& dest, const std::string& date,
           const std::string& time, int seats);

    virtual ~Flight() = default;

    // Every derived class must provide its own fare logic and display
    virtual double      calculateBaseFare() const = 0;
    virtual void        displayDetails()    const = 0;
    virtual std::string getFlightType()     const = 0;

    // Getters
    std::string getFlightNumber()       const;
    std::string getOrigin()             const;
    std::string getDestination()        const;
    std::string getDepartureDate()      const;
    std::string getDepartureTime()      const;
    int         getTotalSeats()         const;
    int         getAvailableSeats()     const;
    double      getOccupancyPercentage()const;

    // Returns false if no seats remain / already full
    bool bookSeat();
    bool cancelSeat();

    friend std::ostream& operator<<(std::ostream& os, const Flight& f);

    // Produces a pipe-delimited string for file storage
    virtual std::string serialize() const;
};

#endif
