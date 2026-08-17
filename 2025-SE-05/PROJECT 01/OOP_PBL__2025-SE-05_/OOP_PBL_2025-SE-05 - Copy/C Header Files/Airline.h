#ifndef AIRLINE_H
#define AIRLINE_H

#include "Flight.h"
#include "Passenger.h"
#include "Ticket.h"
#include <vector>
#include <map>
#include <string>
#include <memory>

// Central class that owns all flights, passengers, and tickets,
// and exposes every operation the menu needs.
class Airline {
private:
    std::string airlineName;

    std::vector<std::unique_ptr<Flight>>    flights;
    std::vector<std::unique_ptr<Passenger>> passengers;
    std::vector<std::unique_ptr<Ticket>>    tickets;

    std::map<std::string, double> flightRevenue;  // flightNumber -> total revenue

    std::string assignSeat(const Flight* flight) const;

public:
    explicit Airline(const std::string& name);
    ~Airline() = default;

    // Flight management
    void                 addFlight(std::unique_ptr<Flight> flight);
    bool                 removeFlight(const std::string& flightNo);
    Flight*              searchFlightByNumber(const std::string& flightNo) const;
    std::vector<Flight*> searchFlightsByRoute(const std::string& orig, const std::string& dest) const;
    std::vector<Flight*> searchFlightsByDate(const std::string& date) const;
    void                 listAllFlights() const;

    // Passenger management
    void       addPassenger(std::unique_ptr<Passenger> passenger);
    bool       removePassenger(const std::string& passengerID);
    Passenger* searchPassenger(const std::string& passengerID) const;
    void       viewBookingHistory(const std::string& passengerID) const;
    void       listAllPassengers() const;

    // Booking & cancellation
    Ticket* bookTicket(const std::string& passengerID, const std::string& flightNo);
    double  cancelTicket(const std::string& ticketID, int daysBeforeDeparture);

    // Reports
    void reportTodaysDepartures(const std::string& today) const;
    void reportOccupancyPerFlight() const;
    void reportTop5RevenueFlights() const;

    // Persistence
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif
