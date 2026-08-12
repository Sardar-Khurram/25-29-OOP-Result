#include <iostream>
#include "Ticket.h"

using namespace std;

Ticket::Ticket(
    int id,
    Flight* f,
    Passenger* p,
    int seat,
    double fare
)
{
    ticketId = id;
    flight = f;
    passenger = p;
    seatNumber = seat;
    farePaid = fare;
    active = true;
}

void Ticket::display() const
{
    cout << "\nTicket Information" << endl;
    cout << "Ticket ID   : " << ticketId << endl;
    cout << "Passenger   : " << passenger->getName() << endl;
    cout << "Flight No   : " << flight->getFlightNo() << endl;
    cout << "Seat Number : " << seatNumber << endl;
    cout << "Fare Paid   : Rs " << farePaid << endl;
    cout << "Status      : " << (active ? "Active" : "Cancelled") << endl;
}

int Ticket::getTicketId() const
{
    return ticketId;
}

bool Ticket::isActive() const
{
    return active;
}

void Ticket::cancel()
{
    active = false;
}

Flight* Ticket::getFlight() const
{
    return flight;
}

double Ticket::getFarePaid() const
{
    return farePaid;
}

Passenger* Ticket::getPassenger() const
{
    return passenger;
}

bool Ticket::operator==(const Ticket& other) const
{
    return ticketId == other.ticketId;
}

ostream& operator<<(ostream& out, const Ticket& t)
{
    out << "Ticket ID: " << t.ticketId;
    return out;
}
