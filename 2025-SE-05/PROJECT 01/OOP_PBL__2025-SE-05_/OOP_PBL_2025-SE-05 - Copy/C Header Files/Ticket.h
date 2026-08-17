#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>

enum class BookingStatus { CONFIRMED, CANCELLED };

// Links one passenger to one flight; holds seat number and fare paid.
class Ticket {
private:
    std::string   ticketID;
    std::string   passengerID;
    std::string   flightNumber;
    std::string   seatNumber;
    double        farePaid;
    BookingStatus status;

    static int ticketCounter;

public:
    // Normal booking: auto-generates a ticket ID
    Ticket(const std::string& passengerID, const std::string& flightNumber,
           const std::string& seatNumber, double fare);

    // Used when loading from file: accepts an explicit ticket ID
    Ticket(const std::string& ticketID, const std::string& passengerID,
           const std::string& flightNumber, const std::string& seatNumber,
           double fare, BookingStatus status);

    std::string   getTicketID()     const;
    std::string   getPassengerID()  const;
    std::string   getFlightNumber() const;
    std::string   getSeatNumber()   const;
    double        getFarePaid()     const;
    BookingStatus getStatus()       const;
    std::string   getStatusStr()    const;

    void cancel();

    bool operator==(const Ticket& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Ticket& t);

    std::string serialize() const;

    static void setCounter(int val);
    static int  getCounter();
};

#endif
