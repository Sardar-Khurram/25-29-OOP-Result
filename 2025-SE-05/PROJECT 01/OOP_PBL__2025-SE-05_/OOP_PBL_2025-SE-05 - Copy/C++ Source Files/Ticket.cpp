#include "Ticket.h"
#include <sstream>
#include <iomanip>

int Ticket::ticketCounter = 1000;

Ticket::Ticket(const std::string& passID, const std::string& flightNo,
               const std::string& seat, double fare)
    : passengerID(passID), flightNumber(flightNo),
      seatNumber(seat), farePaid(fare), status(BookingStatus::CONFIRMED)
{
    ticketID = "TKT-" + std::to_string(ticketCounter++);
}

Ticket::Ticket(const std::string& tickID, const std::string& passID,
               const std::string& flightNo, const std::string& seat,
               double fare, BookingStatus st)
    : ticketID(tickID), passengerID(passID), flightNumber(flightNo),
      seatNumber(seat), farePaid(fare), status(st) {}

std::string   Ticket::getTicketID()     const { return ticketID; }
std::string   Ticket::getPassengerID()  const { return passengerID; }
std::string   Ticket::getFlightNumber() const { return flightNumber; }
std::string   Ticket::getSeatNumber()   const { return seatNumber; }
double        Ticket::getFarePaid()     const { return farePaid; }
BookingStatus Ticket::getStatus()       const { return status; }

std::string Ticket::getStatusStr() const {
    return (status == BookingStatus::CONFIRMED) ? "CONFIRMED" : "CANCELLED";
}

void Ticket::cancel() {
    status = BookingStatus::CANCELLED;
}

bool Ticket::operator==(const Ticket& other) const {
    return ticketID == other.ticketID;
}

std::ostream& operator<<(std::ostream& os, const Ticket& t) {
    os << std::fixed << std::setprecision(2)
       << "Ticket: " << t.ticketID
       << " | Passenger: " << t.passengerID
       << " | Flight: " << t.flightNumber
       << " | Seat: " << t.seatNumber
       << " | Fare: $" << t.farePaid
       << " | " << t.getStatusStr();
    return os;
}

std::string Ticket::serialize() const {
    std::ostringstream oss;
    oss << ticketID << "|" << passengerID << "|" << flightNumber
        << "|" << seatNumber << "|" << farePaid << "|" << getStatusStr();
    return oss.str();
}

void Ticket::setCounter(int val) { ticketCounter = val; }
int  Ticket::getCounter()        { return ticketCounter; }
