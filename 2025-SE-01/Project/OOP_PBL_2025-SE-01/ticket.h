#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>

#include "Flight.h"
#include "Passenger.h"

using namespace std;

class Ticket
{
private:
    string seatNumber;
    double fare;
    string status;

    Flight* flight;
    Passenger* passenger;

public:
    Ticket(Flight* f, Passenger* p, string seat);

    void cancel();
    void display() const;

    double getFare() const;
    string getSeatNumber() const;
    string getStatus() const;
    string getPassengerId() const;
    string getFlightNumber() const;
};

#endif
