#include <iostream>
#include <string>
#include "Airline.h"

using namespace std;

Airline::Airline()
{
    nextTicketId = 1;
}

void Airline::addFlight()
{
    int type;
    cout << "\n--- Add Flight ---" << endl;
    cout << "Select Flight Type:" << endl;
    cout << "1. Domestic Flight" << endl;
    cout << "2. International Flight" << endl;
    cout << "3. Charter Flight" << endl;
    cout << "Enter choice: ";
    cin >> type;

    string fn, org, dest, date;
    int seats;

    cout << "Enter Flight Number : ";
    cin >> fn;

    // Check if flight number already exists
    for(int i = 0; i < (int)flights.size(); i++)
    {
        if(flights[i]->getFlightNo() == fn)
        {
            cout << "Error: Flight with this number already exists!" << endl;
            return;
        }
    }

    cout << "Enter Origin       : ";
    cin >> org;
    cout << "Enter Destination  : ";
    cin >> dest;
    cout << "Enter Date (DD/MM/YYYY): ";
    cin >> date;
    cout << "Enter Total Seats  : ";
    cin >> seats;

    if(seats <= 0)
    {
        cout << "Error: Seats must be greater than zero!" << endl;
        return;
    }

    if(type == 1)
    {
        double fare;
        cout << "Enter Base Fare (Rs): ";
        cin >> fare;
        flights.push_back(new DomesticFlight(fn, org, dest, date, seats, fare));
        cout << "Domestic Flight added successfully!" << endl;
    }
    else if(type == 2)
    {
        bool visa;
        double tax, fare;
        int visaInput;
        cout << "Visa Required? (1=Yes, 0=No): ";
        cin >> visaInput;
        visa = (visaInput == 1);
        cout << "Enter International Tax (Rs): ";
        cin >> tax;
        cout << "Enter Base Fare (Rs): ";
        cin >> fare;
        flights.push_back(new InternationalFlight(fn, org, dest, date, seats, visa, tax, fare));
        cout << "International Flight added successfully!" << endl;
    }
    else if(type == 3)
    {
        string holder;
        double fare;
        cout << "Enter Contract Holder Name: ";
        cin >> holder;
        cout << "Enter Charter Fare (Rs): ";
        cin >> fare;
        flights.push_back(new CharterFlight(fn, org, dest, date, seats, holder, fare));
        cout << "Charter Flight added successfully!" << endl;
    }
    else
    {
        cout << "Invalid flight type!" << endl;
    }
}

void Airline::displayFlights()
{
    if(flights.empty())
    {
        cout << "\nNo flights available." << endl;
        return;
    }

    cout << "\n===== All Flights =====" << endl;
    for(int i = 0; i < (int)flights.size(); i++)
    {
        flights[i]->display();
    }
}

void Airline::registerPassenger()
{
    int type, id;
    string name;

    cout << "\n--- Register Passenger ---" << endl;
    cout << "Select Passenger Type:" << endl;
    cout << "1. Economy Passenger" << endl;
    cout << "2. Business Passenger" << endl;
    cout << "3. First Class Passenger" << endl;
    cout << "Enter choice: ";
    cin >> type;

    cout << "Enter Passenger ID  : ";
    cin >> id;

    // Check if passenger ID already exists
    for(int i = 0; i < (int)passengers.size(); i++)
    {
        if(passengers[i]->getId() == id)
        {
            cout << "Error: Passenger with this ID already exists!" << endl;
            return;
        }
    }

    cout << "Enter Passenger Name: ";
    cin >> name;

    if(type == 1)
    {
        passengers.push_back(new EconomyPassenger(id, name));
        cout << "Economy Passenger registered successfully!" << endl;
    }
    else if(type == 2)
    {
        passengers.push_back(new BusinessPassenger(id, name));
        cout << "Business Passenger registered successfully!" << endl;
    }
    else if(type == 3)
    {
        passengers.push_back(new FirstClassPassenger(id, name));
        cout << "First Class Passenger registered successfully!" << endl;
    }
    else
    {
        cout << "Invalid passenger type!" << endl;
    }
}

void Airline::displayPassengers()
{
    if(passengers.empty())
    {
        cout << "\nNo passengers registered." << endl;
        return;
    }

    cout << "\n===== All Passengers =====" << endl;
    for(int i = 0; i < (int)passengers.size(); i++)
    {
        passengers[i]->display();
    }
}

void Airline::bookTicket()
{
    if(flights.empty())
    {
        cout << "\nNo flights available to book." << endl;
        return;
    }

    if(passengers.empty())
    {
        cout << "\nNo passengers registered." << endl;
        return;
    }

    cout << "\n--- Book Ticket ---" << endl;

    // Display available flights
    cout << "Available Flights:" << endl;
    for(int i = 0; i < (int)flights.size(); i++)
    {
        cout << i+1 << ". Flight " << flights[i]->getFlightNo()
             << " (Available Seats: " << flights[i]->getAvailableSeats() << ")" << endl;
    }

    string flightNo;
    cout << "Enter Flight Number: ";
    cin >> flightNo;

    Flight* selectedFlight = NULL;
    for(int i = 0; i < (int)flights.size(); i++)
    {
        if(flights[i]->getFlightNo() == flightNo)
        {
            selectedFlight = flights[i];
            break;
        }
    }

    if(selectedFlight == NULL)
    {
        FlightNotFoundException ex;
        ex.message();
        return;
    }

    if(selectedFlight->getAvailableSeats() <= 0)
    {
        FlightFullException ex;
        ex.message();
        return;
    }

    int passId;
    cout << "Enter Passenger ID : ";
    cin >> passId;

    Passenger* selectedPassenger = NULL;
    for(int i = 0; i < (int)passengers.size(); i++)
    {
        if(passengers[i]->getId() == passId)
        {
            selectedPassenger = passengers[i];
            break;
        }
    }

    if(selectedPassenger == NULL)
    {
        PassengerNotFoundException ex;
        ex.message();
        return;
    }

    // Check if passenger already has active ticket on this flight
    for(int i = 0; i < (int)tickets.size(); i++)
    {
        if(tickets[i].isActive() &&
           tickets[i].getFlight() == selectedFlight &&
           tickets[i].getPassenger() == selectedPassenger)
        {
            cout << "Error: Passenger already has an active ticket on this flight!" << endl;
            return;
        }
    }

    int seatNo = selectedFlight->getTotalSeats() - selectedFlight->getAvailableSeats() + 1;
    // We need getTotalSeats() - we add it below
    double fare = selectedFlight->calculateFare();

    selectedFlight->bookSeat();

    Ticket newTicket(nextTicketId++, selectedFlight, selectedPassenger, seatNo, fare);
    tickets.push_back(newTicket);

    cout << "\nTicket Booked Successfully!" << endl;
    newTicket.display();
}

void Airline::cancelTicket()
{
    if(tickets.empty())
    {
        cout << "\nNo tickets to cancel." << endl;
        return;
    }

    cout << "\n--- Cancel Ticket ---" << endl;
    cout << "Active Tickets:" << endl;

    bool anyActive = false;
    for(int i = 0; i < (int)tickets.size(); i++)
    {
        if(tickets[i].isActive())
        {
            tickets[i].display();
            anyActive = true;
        }
    }

    if(!anyActive)
    {
        cout << "No active tickets found." << endl;
        return;
    }

    int ticketId;
    cout << "\nEnter Ticket ID to Cancel: ";
    cin >> ticketId;

    for(int i = 0; i < (int)tickets.size(); i++)
    {
        if(tickets[i].getTicketId() == ticketId && tickets[i].isActive())
        {
            // Calculate refund
            double farePaid = tickets[i].getFarePaid();
            double refundPct = tickets[i].getPassenger()->getRefundPercentage();
            double refundAmount = (farePaid * refundPct) / 100.0;

            // Free the seat
            tickets[i].getFlight()->cancelSeat();

            // Cancel the ticket
            tickets[i].cancel();

            cout << "\nTicket cancelled successfully!" << endl;
            cout << "Refund Amount: Rs " << refundAmount
                 << " (" << refundPct << "% of Rs " << farePaid << ")" << endl;
            return;
        }
    }

    InvalidCancellationException ex;
    ex.message();
}

Airline::~Airline()
{
    for(int i = 0; i < (int)flights.size(); i++)
    {
        delete flights[i];
    }

    for(int i = 0; i < (int)passengers.size(); i++)
    {
        delete passengers[i];
    }
}
