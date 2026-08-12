#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>
#include "Flight.h"
#include "Passenger.h"
using namespace std;

class Ticket {
private:
    string    ticketID;
    Flight*   flight;        // pointer to flight (not a copy)
    Passenger* passenger;    // pointer to passenger (not a copy)
    string    seatNumber;
    double    farePaid;
    string    status;        // "Confirmed" or "Cancelled"

public:
    // Constructor
    Ticket(string tid, Flight* fl, Passenger* ps,
           string seat, double fare);

    // Getters
    string     getTicketID()    const;
    Flight*    getFlight()      const;
    Passenger* getPassenger()   const;
    string     getSeatNumber()  const;
    double     getFarePaid()    const;
    string     getStatus()      const;

    // Setter
    void setStatus(string s);

    // Calculate refund based on passenger class
    double calculateRefund() const;

    // Operator overloads
    friend ostream& operator<<(ostream& out, const Ticket& t);
    bool operator==(const Ticket& other) const;  // compare by ticketID

    ~Ticket();
};

#endif
