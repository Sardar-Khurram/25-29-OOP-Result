#ifndef AIRLINE_H
#define AIRLINE_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
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

// ---------------------------------------------
// Generic search template
// Works for both flights and passengers
// ---------------------------------------------
template <typename T>
T* findByID(vector<T*>& items, string id) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getFlightNumber() == id ||
            items[i]->getPassengerID()  == id) {
            return items[i];
        }
    }
    return NULL;
}

class Airline {
private:
    string           airlineName;
    vector<Flight*>    flights;      // owns all flights
    vector<Passenger*> passengers;   // owns all passengers
    vector<Ticket*>    tickets;      // owns all tickets
    int              ticketCounter;  // for generating ticket IDs

    // Private helpers
    string generateTicketID();
    string generateSeatNumber(Flight* f);

public:
    Airline(string name);

    // -- Flight Management --
    void addFlight(Flight* f);
    void removeFlight(string flightNumber);
    Flight* searchFlight(string flightNumber);
    void listAllFlights();

    // -- Passenger Management --
    void addPassenger(Passenger* p);
    void removePassenger(string passengerID);
    Passenger* searchPassenger(string passengerID);
    void listAllPassengers();
    void viewPassengerBookings(string passengerID);

    // -- Booking & Cancellation --
    void bookTicket(string passengerID, string flightNumber);
    void cancelTicket(string ticketID);

    // -- Reports --
    void reportTodayDepartures(string today);
    void reportOccupancy();
    void reportTopRevenueFlights();

    // -- File Persistence --
    void saveToFile(string filename);
    void loadFromFile(string filename);

    // Destructor — cleans up all pointers
    ~Airline();
};

#endif
