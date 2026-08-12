#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <string>
#include <iostream>

#include "Flight.h"
#include "DomesticFlight.h"
#include "InternationalFlight.h"
#include "CharterFlight.h"

#include "Passenger.h"
#include "EconomyPassenger.h"
#include "BusinessPassenger.h"
#include "FirstClassPassenger.h"

#include "Ticket.h"
#include "Exceptions.h"

using namespace std;

class Airline
{
private:

    vector<Flight*> flights;

    vector<Passenger*> passengers;

    vector<Ticket> tickets;

    int nextTicketId;

public:

    Airline();

    void addFlight();

    void displayFlights();

    void registerPassenger();

    void displayPassengers();

    void bookTicket();

    void cancelTicket();

    ~Airline();
};

#endif
