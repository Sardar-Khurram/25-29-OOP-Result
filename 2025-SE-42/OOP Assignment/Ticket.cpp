#include "Ticket.h"

// Constructor
Ticket::Ticket(string tid, Flight* fl, Passenger* ps,
               string seat, double fare)
{
    ticketID   = tid;
    flight     = fl;
    passenger  = ps;
    seatNumber = seat;
    farePaid   = fare;
    status     = "Confirmed";   // always starts as confirmed
}

// --- Getters ---
string     Ticket::getTicketID()   const { return ticketID; }
Flight*    Ticket::getFlight()     const { return flight; }
Passenger* Ticket::getPassenger()  const { return passenger; }
string     Ticket::getSeatNumber() const { return seatNumber; }
double     Ticket::getFarePaid()   const { return farePaid; }
string     Ticket::getStatus()     const { return status; }

// --- Setter ---
void Ticket::setStatus(string s) {
    status = s;
}

// --- Refund Calculation ---
// Uses passenger's refund percentage (polymorphism in action)
double Ticket::calculateRefund() const {
    if (status == "Cancelled") {
        return farePaid * passenger->getRefundPercentage();
    }
    return 0.0;   // no refund if not cancelled
}

// --- Operator << ---
ostream& operator<<(ostream& out, const Ticket& t) {
    out << "Ticket ID : " << t.ticketID                        << endl;
    out << "Passenger : " << t.passenger->getName()            << endl;
    out << "Flight    : " << t.flight->getFlightNumber()       << endl;
    out << "Route     : " << t.flight->getOrigin()
        << " -> "         << t.flight->getDestination()        << endl;
    out << "Date      : " << t.flight->getDate()               << endl;
    out << "Seat      : " << t.seatNumber                      << endl;
    out << "Fare Paid : PKR " << t.farePaid                    << endl;
    out << "Status    : " << t.status                          << endl;
    return out;
}

// --- Operator == ---
// Two tickets are equal if they have the same ticketID
bool Ticket::operator==(const Ticket& other) const {
    return ticketID == other.ticketID;
}

// Destructor
// We do NOT delete flight/passenger here
// because Airline class owns them
Ticket::~Ticket() {}
