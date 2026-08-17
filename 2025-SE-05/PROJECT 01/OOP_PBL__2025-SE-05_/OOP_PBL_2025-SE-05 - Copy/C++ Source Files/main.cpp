#include "Airline.h"
#include "DerivedFlights.h"
#include "Exceptions.h"
#include <iostream>
#include <limits>
#include <string>
#include <memory>

// ── Input helpers ─────────────────────────────────────────────────────────────

static void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

static int getInt(const std::string& prompt) {
    int val;
    while (true) {
        std::cout << prompt;
        if (std::cin >> val) { clearInput(); return val; }
        std::cout << "  Invalid input. Enter a number.\n";
        clearInput();
    }
}

static double getDouble(const std::string& prompt) {
    double val;
    while (true) {
        std::cout << prompt;
        if (std::cin >> val) { clearInput(); return val; }
        std::cout << "  Invalid input. Enter a number.\n";
        clearInput();
    }
}

static std::string getString(const std::string& prompt) {
    std::string val;
    std::cout << prompt;
    std::getline(std::cin, val);
    return val;
}

// ── Menu handlers ─────────────────────────────────────────────────────────────

void menuAddFlight(Airline& airline) {
    std::cout << "\n  Flight type: 1-Domestic  2-International  3-Charter\n";
    int type = getInt("  Choice: ");

    std::string fno  = getString("  Flight Number    : ");
    std::string orig = getString("  Origin           : ");
    std::string dest = getString("  Destination      : ");
    std::string date = getString("  Date (YYYY-MM-DD): ");
    std::string time = getString("  Time (HH:MM)     : ");
    int seats        = getInt   ("  Total Seats      : ");

    try {
        if (type == 1) {
            std::string region = getString("  Region    : ");
            double tax = getDouble("  Tax Rate (%): ");
            airline.addFlight(std::make_unique<DomesticFlight>(
                fno, orig, dest, date, time, seats, region, tax));

        } else if (type == 2) {
            std::string country = getString("  Country           : ");
            int visa  = getInt   ("  Visa required? 1=Yes 0=No: ");
            double sur = getDouble("  Surcharge ($)     : ");
            airline.addFlight(std::make_unique<InternationalFlight>(
                fno, orig, dest, date, time, seats, country, visa == 1, sur));

        } else if (type == 3) {
            std::string holder = getString("  Contract Holder: ");
            double fee = getDouble("  Charter Fee ($): ");
            airline.addFlight(std::make_unique<CharterFlight>(
                fno, orig, dest, date, time, seats, holder, fee));

        } else {
            std::cout << "  Invalid type.\n";
        }
    } catch (const std::exception& e) {
        std::cout << "  [ERROR] " << e.what() << "\n";
    }
}

void menuAddPassenger(Airline& airline) {
    std::cout << "\n  Passenger class: 1-Economy  2-Business  3-First Class\n";
    int cls = getInt("  Choice: ");

    std::string id    = getString("  Passenger ID: ");
    std::string name  = getString("  Full Name   : ");
    std::string email = getString("  Email       : ");
    std::string phone = getString("  Phone       : ");

    try {
        if (cls == 1)
            airline.addPassenger(std::make_unique<EconomyPassenger>(id, name, email, phone));
        else if (cls == 2)
            airline.addPassenger(std::make_unique<BusinessPassenger>(id, name, email, phone));
        else if (cls == 3)
            airline.addPassenger(std::make_unique<FirstClassPassenger>(id, name, email, phone));
        else
            std::cout << "  Invalid class.\n";
    } catch (const std::exception& e) {
        std::cout << "  [ERROR] " << e.what() << "\n";
    }
}

void menuSearchFlight(Airline& airline) {
    std::cout << "\n  Search by: 1-Number  2-Route  3-Date\n";
    int opt = getInt("  Choice: ");

    if (opt == 1) {
        std::string fno = getString("  Flight Number: ");
        Flight* f = airline.searchFlightByNumber(fno);
        if (f) f->displayDetails();
        else   std::cout << "  Flight not found.\n";

    } else if (opt == 2) {
        std::string orig = getString("  Origin     : ");
        std::string dest = getString("  Destination: ");
        auto results = airline.searchFlightsByRoute(orig, dest);
        if (results.empty()) std::cout << "  No flights found.\n";
        else for (auto* f : results) f->displayDetails();

    } else if (opt == 3) {
        std::string date = getString("  Date (YYYY-MM-DD): ");
        auto results = airline.searchFlightsByDate(date);
        if (results.empty()) std::cout << "  No flights found.\n";
        else for (auto* f : results) f->displayDetails();

    } else {
        std::cout << "  Invalid option.\n";
    }
}

void menuBookTicket(Airline& airline) {
    std::string pid = getString("\n  Passenger ID : ");
    std::string fno = getString("  Flight Number: ");
    try {
        Ticket* t = airline.bookTicket(pid, fno);
        std::cout << "\n  Booking confirmed!\n  " << *t << "\n";
    } catch (const std::exception& e) {
        std::cout << "  [!] " << e.what() << "\n";
    }
}

void menuCancelTicket(Airline& airline) {
    std::string tid = getString("\n  Ticket ID            : ");
    int days = getInt("  Days before departure: ");
    try {
        double refund = airline.cancelTicket(tid, days);
        std::cout << std::fixed << "  Cancelled. Refund: $" << refund << "\n";
    } catch (const std::exception& e) {
        std::cout << "  [!] " << e.what() << "\n";
    }
}

void menuReports(Airline& airline) {
    std::cout << "\n  Reports: 1-Today's Departures  2-Occupancy  3-Top 5 Revenue\n";
    int opt = getInt("  Choice: ");
    if (opt == 1) {
        std::string today = getString("  Today's date (YYYY-MM-DD): ");
        airline.reportTodaysDepartures(today);
    } else if (opt == 2) {
        airline.reportOccupancyPerFlight();
    } else if (opt == 3) {
        airline.reportTop5RevenueFlights();
    } else {
        std::cout << "  Invalid option.\n";
    }
}

void showMenu() {
    std::cout << "\n  ====  SkyLink Airways  ====\n"
              << "  1.  Add Flight\n"
              << "  2.  Remove Flight\n"
              << "  3.  Search Flight\n"
              << "  4.  List All Flights\n"
              << "  5.  Register Passenger\n"
              << "  6.  Remove Passenger\n"
              << "  7.  Passenger Booking History\n"
              << "  8.  List All Passengers\n"
              << "  9.  Book Ticket\n"
              << "  10. Cancel Ticket\n"
              << "  11. Reports\n"
              << "  0.  Save & Exit\n"
              << "  ===========================\n";
}

// ── main ──────────────────────────────────────────────────────────────────────

int main() {
    const std::string DATA_FILE = "data/airline_data.txt";
    Airline airline("SkyLink Airways");

    std::cout << "\n  Welcome to SkyLink Airways\n";
    airline.loadFromFile(DATA_FILE);

    int choice = -1;
    while (choice != 0) {
        showMenu();
        choice = getInt("  Choice: ");

        try {
            switch (choice) {
                case 1: menuAddFlight(airline); break;
                case 2: {
                    std::string fno = getString("\n  Flight Number: ");
                    if (airline.removeFlight(fno))
                         std::cout << "  [OK] Flight removed.\n";
                    else std::cout << "  Flight not found.\n";
                    break;
                }
                case 3: menuSearchFlight(airline); break;
                case 4: airline.listAllFlights();   break;
                case 5: menuAddPassenger(airline);  break;
                case 6: {
                    std::string pid = getString("\n  Passenger ID: ");
                    if (airline.removePassenger(pid))
                         std::cout << "  [OK] Passenger removed.\n";
                    else std::cout << "  Passenger not found.\n";
                    break;
                }
                case 7: {
                    std::string pid = getString("\n  Passenger ID: ");
                    airline.viewBookingHistory(pid);
                    break;
                }
                case 8:  airline.listAllPassengers(); break;
                case 9:  menuBookTicket(airline);     break;
                case 10: menuCancelTicket(airline);   break;
                case 11: menuReports(airline);        break;
                case 0:
                    airline.saveToFile(DATA_FILE);
                    std::cout << "\n  Goodbye!\n\n";
                    break;
                default:
                    std::cout << "  Invalid choice.\n";
            }
        } catch (const std::exception& e) {
            std::cout << "  [ERROR] " << e.what() << "\n";
        }
    }
    return 0;
}
