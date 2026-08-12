#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>
using namespace std;

class Flight {
protected:
    string flightNumber;
    string origin;
    string destination;
    string departureDate;   // format: "YYYY-MM-DD"
    string departureTime;   // format: "HH:MM"
    int totalSeats;
    int availableSeats;

public:
    // Constructor
    Flight(string fNum, string org, string dest,
           string date, string time, int seats);

    // Getters
    string getFlightNumber() const;
    string getOrigin()       const;
    string getDestination()  const;
    string getDate()         const;
    string getTime()         const;
    int    getTotalSeats()   const;
    int    getAvailableSeats() const;

    // Setters
    void setAvailableSeats(int s);

    // Pure virtual functions (MUST be overridden by derived classes)
    virtual double calculateBaseFare() const = 0;
    virtual void   displayDetails()   const = 0;

    // Operator overload: print flight with cout 
    friend ostream& operator<<(ostream& out, const Flight& f);

    // Virtual destructor (important for inheritance)
    virtual ~Flight();
};

#endif
