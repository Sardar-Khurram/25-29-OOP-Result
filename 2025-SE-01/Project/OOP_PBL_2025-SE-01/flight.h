#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

using namespace std;

class Flight
{
protected:
    string flightNumber;
    string origin;
    string destination;
    int totalSeats;
    int availableSeats;

public:
    Flight(string fn, string org, string dest, int seats);

    virtual double calculateBaseFare() = 0;
    virtual void display() = 0;

    bool bookSeat();
    void cancelSeat();

    string getFlightNumber() const;
    string getOrigin() const;
    string getDestination() const;
    int getTotalSeats() const;
    int getAvailableSeats() const;

    virtual ~Flight();
};

class DomesticFlight : public Flight
{
public:
    DomesticFlight(string fn, string org, string dest, int seats);

    double calculateBaseFare() override;
    void display() override;
};

class InternationalFlight : public Flight
{
public:
    InternationalFlight(string fn, string org, string dest, int seats);

    double calculateBaseFare() override;
    void display() override;
};

#endif
