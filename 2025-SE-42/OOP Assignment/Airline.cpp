#include "Airline.h"
#include <sstream>

// ---------------------------------------------
// Constructor / Destructor
// ---------------------------------------------
Airline::Airline(string name) {
    airlineName   = name;
    ticketCounter = 1;
}

Airline::~Airline() {
    for (int i = 0; i < (int)tickets.size();    i++) delete tickets[i];
    for (int i = 0; i < (int)flights.size();    i++) delete flights[i];
    for (int i = 0; i < (int)passengers.size(); i++) delete passengers[i];
}

// ---------------------------------------------
// Private Helpers
// ---------------------------------------------
string Airline::generateTicketID() {
    stringstream ss;
    ss << ticketCounter;
    string num = ss.str();

    string id = "TKT";
    if (ticketCounter < 10)       id += "00";
    else if (ticketCounter < 100) id += "0";
    id += num;

    ticketCounter++;
    return id;
}

string Airline::generateSeatNumber(Flight* f) {
    int seatNum = f->getTotalSeats() - f->getAvailableSeats() + 1;
    stringstream ss;
    ss << seatNum;
    return "S" + ss.str();
}

// ---------------------------------------------
// Flight Management
// ---------------------------------------------
void Airline::addFlight(Flight* f) {
    flights.push_back(f);
    cout << "Flight " << f->getFlightNumber() << " added." << endl;
}

void Airline::removeFlight(string flightNumber) {
    for (int i = 0; i < (int)flights.size(); i++) {
        if (flights[i]->getFlightNumber() == flightNumber) {
            delete flights[i];
            flights.erase(flights.begin() + i);
            cout << "Flight " << flightNumber << " removed." << endl;
            return;
        }
    }
    throw FlightNotFoundException(flightNumber);
}

Flight* Airline::searchFlight(string flightNumber) {
    for (int i = 0; i < (int)flights.size(); i++) {
        if (flights[i]->getFlightNumber() == flightNumber)
            return flights[i];
    }
    throw FlightNotFoundException(flightNumber);
}

void Airline::listAllFlights() {
    if (flights.empty()) {
        cout << "No flights available." << endl;
        return;
    }
    cout << "\n===== All Flights =====" << endl;
    for (int i = 0; i < (int)flights.size(); i++) {
        flights[i]->displayDetails();
        cout << "----------------------" << endl;
    }
}

// ---------------------------------------------
// Passenger Management
// ---------------------------------------------
void Airline::addPassenger(Passenger* p) {
    passengers.push_back(p);
    cout << "Passenger " << p->getName() << " registered." << endl;
}

void Airline::removePassenger(string passengerID) {
    for (int i = 0; i < (int)passengers.size(); i++) {
        if (passengers[i]->getPassengerID() == passengerID) {
            delete passengers[i];
            passengers.erase(passengers.begin() + i);
            cout << "Passenger " << passengerID << " removed." << endl;
            return;
        }
    }
    throw PassengerNotFoundException(passengerID);
}

Passenger* Airline::searchPassenger(string passengerID) {
    for (int i = 0; i < (int)passengers.size(); i++) {
        if (passengers[i]->getPassengerID() == passengerID)
            return passengers[i];
    }
    throw PassengerNotFoundException(passengerID);
}

void Airline::listAllPassengers() {
    if (passengers.empty()) {
        cout << "No passengers registered." << endl;
        return;
    }
    cout << "\n===== All Passengers =====" << endl;
    for (int i = 0; i < (int)passengers.size(); i++) {
        passengers[i]->displayDetails();
        cout << "-------------------------" << endl;
    }
}

void Airline::viewPassengerBookings(string passengerID) {
    Passenger* p = searchPassenger(passengerID);
    cout << "\n===== Bookings for " << p->getName() << " =====" << endl;
    bool found = false;
    for (int i = 0; i < (int)tickets.size(); i++) {
        if (tickets[i]->getPassenger()->getPassengerID() == passengerID) {
            cout << *tickets[i] << endl;
            found = true;
        }
    }
    if (!found) cout << "No bookings found." << endl;
}

// ---------------------------------------------
// Booking & Cancellation
// ---------------------------------------------
void Airline::bookTicket(string passengerID, string flightNumber) {
    Passenger* p = searchPassenger(passengerID);
    Flight*    f = searchFlight(flightNumber);

    if (f->getAvailableSeats() == 0)
        throw FlightFullException(flightNumber);

    for (int i = 0; i < (int)tickets.size(); i++) {
        if (tickets[i]->getPassenger()->getPassengerID() == passengerID &&
            tickets[i]->getFlight()->getFlightNumber()   == flightNumber &&
            tickets[i]->getStatus() == "Confirmed") {
            throw DuplicateBookingException(p->getName(), flightNumber);
        }
    }

    string seat = generateSeatNumber(f);
    double fare = f->calculateBaseFare();
    string tid  = generateTicketID();
    Ticket* t   = new Ticket(tid, f, p, seat, fare);

    f->setAvailableSeats(f->getAvailableSeats() - 1);

    int pts = (int)(fare / 100.0 * p->getLoyaltyMultiplier());
    p->addLoyaltyPoints(pts);

    tickets.push_back(t);

    cout << "\nTicket booked successfully!" << endl;
    cout << *t << endl;
}

void Airline::cancelTicket(string ticketID) {
    for (int i = 0; i < (int)tickets.size(); i++) {
        if (tickets[i]->getTicketID() == ticketID) {
            if (tickets[i]->getStatus() == "Cancelled")
                throw InvalidCancellationException(
                    "Ticket " + ticketID + " is already cancelled.");

            double refund = tickets[i]->calculateRefund();
            Flight* f = tickets[i]->getFlight();
            f->setAvailableSeats(f->getAvailableSeats() + 1);
            tickets[i]->setStatus("Cancelled");

            cout << "Ticket " << ticketID << " cancelled." << endl;
            cout << "Refund amount: PKR " << refund << endl;
            return;
        }
    }
    throw InvalidCancellationException("Ticket " + ticketID + " not found.");
}

// ---------------------------------------------
// Reports
// ---------------------------------------------
void Airline::reportTodayDepartures(string today) {
    cout << "\n===== Departures on " << today << " =====" << endl;
    bool found = false;
    for (int i = 0; i < (int)flights.size(); i++) {
        if (flights[i]->getDate() == today) {
            flights[i]->displayDetails();
            cout << "----------------------" << endl;
            found = true;
        }
    }
    if (!found) cout << "No departures today." << endl;
}

void Airline::reportOccupancy() {
    cout << "\n===== Flight Occupancy =====" << endl;
    for (int i = 0; i < (int)flights.size(); i++) {
        int total  = flights[i]->getTotalSeats();
        int avail  = flights[i]->getAvailableSeats();
        int booked = total - avail;
        double pct = (total > 0) ? (booked * 100.0 / total) : 0;
        cout << flights[i]->getFlightNumber()
             << " | Booked: " << booked << "/" << total
             << " | Occupancy: " << pct << "%" << endl;
    }
}

void Airline::reportTopRevenueFlights() {
    map<string, double> revenueMap;

    for (int i = 0; i < (int)tickets.size(); i++) {
        if (tickets[i]->getStatus() == "Confirmed") {
            string fNum = tickets[i]->getFlight()->getFlightNumber();
            revenueMap[fNum] += tickets[i]->getFarePaid();
        }
    }

    // Copy map to vector for sorting
    vector<pair<string, double> > revList;
    map<string,double>::iterator it;
    for (it = revenueMap.begin(); it != revenueMap.end(); it++) {
        revList.push_back(make_pair(it->first, it->second));
    }

    // Sort descending by revenue — old-style comparator (no lambda)
    for (int i = 0; i < (int)revList.size(); i++) {
        for (int j = i+1; j < (int)revList.size(); j++) {
            if (revList[j].second > revList[i].second) {
                pair<string,double> tmp = revList[i];
                revList[i] = revList[j];
                revList[j] = tmp;
            }
        }
    }

    cout << "\n===== Top Revenue Flights =====" << endl;
    int limit = (int)revList.size() < 5 ? (int)revList.size() : 5;
    for (int i = 0; i < limit; i++) {
        cout << i+1 << ". Flight " << revList[i].first
             << " - PKR " << revList[i].second << endl;
    }
    if (revList.empty()) cout << "No revenue data yet." << endl;
}

// ---------------------------------------------
// Save to File
// ---------------------------------------------
void Airline::saveToFile(string filename) {
    ofstream file(filename.c_str());   // .c_str() needed for old compiler
    if (!file.is_open()) {
        cout << "Error: Could not open file for saving." << endl;
        return;
    }

    file << ticketCounter << "\n";
    file << flights.size() << "\n";

    for (int i = 0; i < (int)flights.size(); i++) {
        Flight* f = flights[i];
        if (dynamic_cast<DomesticFlight*>(f)) {
            DomesticFlight* d = dynamic_cast<DomesticFlight*>(f);
            file << "DOMESTIC,"
                 << f->getFlightNumber()   << ","
                 << f->getOrigin()         << ","
                 << f->getDestination()    << ","
                 << f->getDate()           << ","
                 << f->getTime()           << ","
                 << f->getTotalSeats()     << ","
                 << f->getAvailableSeats() << ","
                 << d->getProvince()       << "\n";
        }
        else if (dynamic_cast<InternationalFlight*>(f)) {
            InternationalFlight* inf = dynamic_cast<InternationalFlight*>(f);
            file << "INTERNATIONAL,"
                 << f->getFlightNumber()   << ","
                 << f->getOrigin()         << ","
                 << f->getDestination()    << ","
                 << f->getDate()           << ","
                 << f->getTime()           << ","
                 << f->getTotalSeats()     << ","
                 << f->getAvailableSeats() << ","
                 << inf->getCountry()      << ","
                 << inf->isVisaRequired()  << "\n";
        }
        else if (dynamic_cast<CharterFlight*>(f)) {
            CharterFlight* c = dynamic_cast<CharterFlight*>(f);
            file << "CHARTER,"
                 << f->getFlightNumber()   << ","
                 << f->getOrigin()         << ","
                 << f->getDestination()    << ","
                 << f->getDate()           << ","
                 << f->getTime()           << ","
                 << f->getTotalSeats()     << ","
                 << f->getAvailableSeats() << ","
                 << c->getContractHolder() << ","
                 << c->getCharterFlatFee() << "\n";
        }
    }

    file << passengers.size() << "\n";
    for (int i = 0; i < (int)passengers.size(); i++) {
        Passenger* p = passengers[i];
        file << p->getPassengerClass() << ","
             << p->getPassengerID()    << ","
             << p->getName()           << ","
             << p->getEmail()          << ","
             << p->getPhone()          << ","
             << p->getLoyaltyPoints()  << "\n";
    }

    file << tickets.size() << "\n";
    for (int i = 0; i < (int)tickets.size(); i++) {
        Ticket* t = tickets[i];
        file << t->getTicketID()                       << ","
             << t->getPassenger()->getPassengerID()    << ","
             << t->getFlight()->getFlightNumber()      << ","
             << t->getSeatNumber()                     << ","
             << t->getFarePaid()                       << ","
             << t->getStatus()                         << "\n";
    }

    file.close();
    cout << "Data saved to " << filename << endl;
}

// ---------------------------------------------
// Load from File
// ---------------------------------------------
void Airline::loadFromFile(string filename) {
    ifstream file(filename.c_str());   // .c_str() needed for old compiler
    if (!file.is_open()) {
        cout << "No saved data found. Starting fresh." << endl;
        return;
    }

    for (int i = 0; i < (int)tickets.size();    i++) delete tickets[i];
    for (int i = 0; i < (int)flights.size();    i++) delete flights[i];
    for (int i = 0; i < (int)passengers.size(); i++) delete passengers[i];
    tickets.clear(); flights.clear(); passengers.clear();

    string line;

    getline(file, line);
    ticketCounter = atoi(line.c_str());   // atoi instead of stoi

    int flightCount;
    getline(file, line);
    flightCount = atoi(line.c_str());

    for (int i = 0; i < flightCount; i++) {
        getline(file, line);
        vector<string> tok;
        string token = "";
        for (int j = 0; j < (int)line.size(); j++) {
            if (line[j] == ',') {
                tok.push_back(token);
                token = "";
            } else {
                token += line[j];
            }
        }
        tok.push_back(token);

        string type = tok[0];
        if (type == "DOMESTIC") {
            DomesticFlight* d = new DomesticFlight(
                tok[1], tok[2], tok[3], tok[4], tok[5],
                atoi(tok[6].c_str()), tok[8], 0.05);
            d->setAvailableSeats(atoi(tok[7].c_str()));
            flights.push_back(d);
        }
        else if (type == "INTERNATIONAL") {
            InternationalFlight* inf = new InternationalFlight(
                tok[1], tok[2], tok[3], tok[4], tok[5],
                atoi(tok[6].c_str()), tok[8],
                atoi(tok[9].c_str()), 0.15);
            inf->setAvailableSeats(atoi(tok[7].c_str()));
            flights.push_back(inf);
        }
        else if (type == "CHARTER") {
            CharterFlight* c = new CharterFlight(
                tok[1], tok[2], tok[3], tok[4], tok[5],
                atoi(tok[6].c_str()), tok[8],
                atof(tok[9].c_str()));   // atof instead of stod
            c->setAvailableSeats(atoi(tok[7].c_str()));
            flights.push_back(c);
        }
    }

    int passengerCount;
    getline(file, line);
    passengerCount = atoi(line.c_str());

    for (int i = 0; i < passengerCount; i++) {
        getline(file, line);
        vector<string> tok;
        string token = "";
        for (int j = 0; j < (int)line.size(); j++) {
            if (line[j] == ',') {
                tok.push_back(token);
                token = "";
            } else {
                token += line[j];
            }
        }
        tok.push_back(token);

        string cls = tok[0];
        Passenger* p = NULL;
        if (cls == "Economy")
            p = new EconomyPassenger(tok[1], tok[2], tok[3], tok[4]);
        else if (cls == "Business")
            p = new BusinessPassenger(tok[1], tok[2], tok[3], tok[4]);
        else if (cls == "First Class")
            p = new FirstClassPassenger(tok[1], tok[2], tok[3], tok[4]);

        if (p) {
            p->addLoyaltyPoints(atoi(tok[5].c_str()));
            passengers.push_back(p);
        }
    }

    int ticketCount;
    getline(file, line);
    ticketCount = atoi(line.c_str());

    for (int i = 0; i < ticketCount; i++) {
        getline(file, line);
        vector<string> tok;
        string token = "";
        for (int j = 0; j < (int)line.size(); j++) {
            if (line[j] == ',') {
                tok.push_back(token);
                token = "";
            } else {
                token += line[j];
            }
        }
        tok.push_back(token);

        Passenger* p = NULL;
        Flight*    f = NULL;
        for (int j = 0; j < (int)passengers.size(); j++)
            if (passengers[j]->getPassengerID() == tok[1]) p = passengers[j];
        for (int j = 0; j < (int)flights.size(); j++)
            if (flights[j]->getFlightNumber() == tok[2]) f = flights[j];

        if (p && f) {
            Ticket* t = new Ticket(tok[0], f, p, tok[3],
                                   atof(tok[4].c_str()));
            t->setStatus(tok[5]);
            tickets.push_back(t);
        }
    }

    file.close();
    cout << "Data loaded from " << filename << endl;
}
