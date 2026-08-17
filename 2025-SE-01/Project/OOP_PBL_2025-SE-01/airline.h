#ifndef AIRLINE_H
#define AIRLINE_H

#include <iostream>
#include <vector>
#include <string>

#include "Flight.h"
#include "Passenger.h"
#include "Ticket.h"

using namespace std;

class Airline
{
private:
    vector<Flight*> flights;
    vector<Passenger*> passengers;
    vector<Ticket*> tickets;

public:
    Airline();

    // Flight Operations
    void addFlight();
    void showFlights();

    // Passenger Operations
    void addPassenger();
    void showPassengers();

    // Ticket Operations
    void bookTicket();
    void cancelTicket();
    void showTickets();

    // Reports
    void report();

    // File Handling
    void saveData();

    // Destructor
    ~Airline();
};

#endif
