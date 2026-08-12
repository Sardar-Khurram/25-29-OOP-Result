#include <iostream>
#include <string>
#include <limits>
#include "Airline.h"
using namespace std;

// ---------------------------------------------
// Helper: clear bad input from cin
// ---------------------------------------------
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// ---------------------------------------------
// Helper: get a valid integer from user
// ---------------------------------------------
int getInt(string prompt) {
    int val;
    while (true) {
        cout << prompt;
        cin >> val;
        if (cin.fail()) {
            cout << "  Invalid input. Enter a number." << endl;
            clearInput();
        } else {
            clearInput();
            return val;
        }
    }
}

// ---------------------------------------------
// Helper: get a non-empty string from user
// ---------------------------------------------
string getString(string prompt) {
    string val;
    while (true) {
        cout << prompt;
        getline(cin, val);
        if (val.empty()) {
            cout << "  Input cannot be empty." << endl;
        } else {
            return val;
        }
    }
}

// ---------------------------------------------
// Sub-menus
// ---------------------------------------------

void flightMenu(Airline& airline) {
    int choice;
    do {
        cout << "\n===== Flight Management =====" << endl;
        cout << "1. Add Domestic Flight"          << endl;
        cout << "2. Add International Flight"     << endl;
        cout << "3. Add Charter Flight"           << endl;
        cout << "4. Remove Flight"                << endl;
        cout << "5. Search Flight"                << endl;
        cout << "6. List All Flights"             << endl;
        cout << "0. Back"                         << endl;
        choice = getInt("Choice: ");

        if (choice == 1) {
            string fNum  = getString("  Flight Number : ");
            string org   = getString("  Origin        : ");
            string dest  = getString("  Destination   : ");
            string date  = getString("  Date (YYYY-MM-DD): ");
            string time  = getString("  Time (HH:MM)  : ");
            int    seats = getInt   ("  Total Seats   : ");
            string prov  = getString("  Province      : ");
            double tax   = 0.05;
            airline.addFlight(new DomesticFlight(
                fNum, org, dest, date, time, seats, prov, tax));
        }
        else if (choice == 2) {
            string fNum    = getString("  Flight Number : ");
            string org     = getString("  Origin        : ");
            string dest    = getString("  Destination   : ");
            string date    = getString("  Date (YYYY-MM-DD): ");
            string time    = getString("  Time (HH:MM)  : ");
            int    seats   = getInt   ("  Total Seats   : ");
            string country = getString("  Country       : ");
            int    visa    = getInt   ("  Visa Required (1=Yes 0=No): ");
            airline.addFlight(new InternationalFlight(
                fNum, org, dest, date, time, seats,
                country, visa == 1, 0.15));
        }
        else if (choice == 3) {
            string fNum   = getString("  Flight Number  : ");
            string org    = getString("  Origin         : ");
            string dest   = getString("  Destination    : ");
            string date   = getString("  Date (YYYY-MM-DD): ");
            string time   = getString("  Time (HH:MM)   : ");
            int    seats  = getInt   ("  Total Seats    : ");
            string holder = getString("  Contract Holder: ");
            double fee    = 0;
            cout << "  Charter Fee (PKR): ";
            cin >> fee;
            clearInput();
            airline.addFlight(new CharterFlight(
                fNum, org, dest, date, time, seats, holder, fee));
        }
        else if (choice == 4) {
            string fNum = getString("  Flight Number: ");
            try { airline.removeFlight(fNum); }
            catch (AirlineException& e) { cout << e.getMessage()<< endl; }
        }
        else if (choice == 5) {
            string fNum = getString("  Flight Number: ");
            try {
                Flight* f = airline.searchFlight(fNum);
                f->displayDetails();
            }
            catch (AirlineException& e) { cout << e.getMessage() << endl; }
        }
        else if (choice == 6) {
            airline.listAllFlights();
        }

    } while (choice != 0);
}

// ---------------------------------------------

void passengerMenu(Airline& airline) {
    int choice;
    do {
        cout << "\n===== Passenger Management =====" << endl;
        cout << "1. Register Economy Passenger"    << endl;
        cout << "2. Register Business Passenger"   << endl;
        cout << "3. Register First Class Passenger"<< endl;
        cout << "4. Remove Passenger"              << endl;
        cout << "5. Search Passenger"              << endl;
        cout << "6. List All Passengers"           << endl;
        cout << "7. View Passenger Bookings"       << endl;
        cout << "0. Back"                          << endl;
        choice = getInt("Choice: ");

        if (choice == 1 || choice == 2 || choice == 3) {
            string id    = getString("  Passenger ID : ");
            string name  = getString("  Name         : ");
            string email = getString("  Email        : ");
            string phone = getString("  Phone        : ");

            if (choice == 1)
                airline.addPassenger(new EconomyPassenger(id,name,email,phone));
            else if (choice == 2)
                airline.addPassenger(new BusinessPassenger(id,name,email,phone));
            else
                airline.addPassenger(new FirstClassPassenger(id,name,email,phone));
        }
        else if (choice == 4) {
            string id = getString("  Passenger ID: ");
            try { airline.removePassenger(id); }
            catch (AirlineException& e) { cout << e.getMessage() << endl; }
        }
        else if (choice == 5) {
            string id = getString("  Passenger ID: ");
            try {
                Passenger* p = airline.searchPassenger(id);
                p->displayDetails();
            }
            catch (AirlineException& e) { cout << e.getMessage() << endl; }
        }
        else if (choice == 6) {
            airline.listAllPassengers();
        }
        else if (choice == 7) {
            string id = getString("  Passenger ID: ");
            try { airline.viewPassengerBookings(id); }
            catch (AirlineException& e) { cout << e.getMessage() << endl; }
        }

    } while (choice != 0);
}

// ---------------------------------------------

void bookingMenu(Airline& airline) {
    int choice;
    do {
        cout << "\n===== Booking & Cancellation =====" << endl;
        cout << "1. Book Ticket"                      << endl;
        cout << "2. Cancel Ticket"                    << endl;
        cout << "0. Back"                             << endl;
        choice = getInt("Choice: ");

        if (choice == 1) {
            string pid  = getString("  Passenger ID  : ");
            string fnum = getString("  Flight Number : ");
            try { airline.bookTicket(pid, fnum); }
            catch (AirlineException& e) { cout << e.getMessage() << endl; }
        }
        else if (choice == 2) {
            string tid = getString("  Ticket ID: ");
            try { airline.cancelTicket(tid); }
            catch (AirlineException& e) {cout << e.getMessage() << endl; }
        }

    } while (choice != 0);
}

// ---------------------------------------------

void reportMenu(Airline& airline) {
    int choice;
    do {
        cout << "\n===== Reports =====" << endl;
        cout << "1. Today's Departures"     << endl;
        cout << "2. Flight Occupancy"       << endl;
        cout << "3. Top Revenue Flights"    << endl;
        cout << "0. Back"                   << endl;
        choice = getInt("Choice: ");

        if (choice == 1) {
            string date = getString("  Enter date (YYYY-MM-DD): ");
            airline.reportTodayDepartures(date);
        }
        else if (choice == 2) {
            airline.reportOccupancy();
        }
        else if (choice == 3) {
            airline.reportTopRevenueFlights();
        }

    } while (choice != 0);
}

// ---------------------------------------------
// Load sample data for demonstration
// ---------------------------------------------
void loadSampleData(Airline& airline) {
    // 10 Flights
    airline.addFlight(new DomesticFlight(
        "SK101","Karachi","Lahore","2026-06-01","08:00",150,"Punjab",0.05));
    airline.addFlight(new DomesticFlight(
        "SK102","Lahore","Islamabad","2026-06-01","10:00",120,"ICT",0.05));
    airline.addFlight(new DomesticFlight(
        "SK103","Peshawar","Karachi","2026-06-02","09:30",100,"Sindh",0.05));
    airline.addFlight(new InternationalFlight(
        "SK201","Karachi","Dubai","2026-06-01","14:00",200,"UAE",true,0.15));
    airline.addFlight(new InternationalFlight(
        "SK202","Lahore","London","2026-06-03","22:00",250,"UK",true,0.15));
    airline.addFlight(new InternationalFlight(
        "SK203","Islamabad","Istanbul","2026-06-04","06:00",180,"Turkey",true,0.15));
    airline.addFlight(new CharterFlight(
        "SK301","Karachi","Quetta","2026-06-05","11:00",50,"PTCL Corp",500000));
    airline.addFlight(new CharterFlight(
        "SK302","Lahore","Multan","2026-06-06","13:00",40,"HBL Bank",400000));
    airline.addFlight(new DomesticFlight(
        "SK104","Multan","Karachi","2026-06-07","07:00",130,"Sindh",0.05));
    airline.addFlight(new InternationalFlight(
        "SK204","Karachi","Riyadh","2026-06-08","03:00",220,"Saudi Arabia",true,0.15));

    // 8 Passengers
    airline.addPassenger(new EconomyPassenger(
        "P001","Ali Hassan","ali@email.com","0300-1234567"));
    airline.addPassenger(new EconomyPassenger(
        "P002","Sara Khan","sara@email.com","0301-2345678"));
    airline.addPassenger(new BusinessPassenger(
        "P003","Ahmed Raza","ahmed@email.com","0302-3456789"));
    airline.addPassenger(new BusinessPassenger(
        "P004","Fatima Noor","fatima@email.com","0303-4567890"));
    airline.addPassenger(new FirstClassPassenger(
        "P005","Usman Malik","usman@email.com","0304-5678901"));
    airline.addPassenger(new FirstClassPassenger(
        "P006","Zara Sheikh","zara@email.com","0305-6789012"));
    airline.addPassenger(new EconomyPassenger(
        "P007","Bilal Qureshi","bilal@email.com","0306-7890123"));
    airline.addPassenger(new BusinessPassenger(
        "P008","Hira Baig","hira@email.com","0307-8901234"));

    cout << "\n Sample data loaded successfully!" << endl;
}

// ---------------------------------------------
// MAIN
// ---------------------------------------------
int main() {
    Airline airline("Gilgit Airways");
    string  saveFile = "airline_data.txt";

    cout << "========================================" << endl;
    cout << "   Welcome to Gilgit Airways System    " << endl;
    cout << "========================================" << endl;

    // Try to load saved data first
    airline.loadFromFile(saveFile);

    int choice;
    do {
        cout << "\n========= MAIN MENU =========" << endl;
        cout << "1. Flight Management"            << endl;
        cout << "2. Passenger Management"         << endl;
        cout << "3. Booking & Cancellation"       << endl;
        cout << "4. Reports"                      << endl;
        cout << "5. Load Sample Data"             << endl;
        cout << "6. Save Data"                    << endl;
        cout << "0. Exit"                         << endl;
        choice = getInt("Choice: ");

        if      (choice == 1) flightMenu(airline);
        else if (choice == 2) passengerMenu(airline);
        else if (choice == 3) bookingMenu(airline);
        else if (choice == 4) reportMenu(airline);
        else if (choice == 5) loadSampleData(airline);
        else if (choice == 6) airline.saveToFile(saveFile);
        else if (choice == 0) {
            airline.saveToFile(saveFile);
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 0);

    return 0;
}
