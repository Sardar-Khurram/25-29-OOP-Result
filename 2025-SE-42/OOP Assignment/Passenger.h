#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Passenger {
protected:
    string passengerID;
    string name;
    string email;
    string phone;
    int    loyaltyPoints;

public:
    Passenger(string id, string nm, string email, string phone);

    // Getters
    string getName()          const;
    string getPassengerID()   const;
    string getEmail()         const;
    string getPhone()         const;
    int    getLoyaltyPoints() const;

    // Loyalty points
    void addLoyaltyPoints(int pts);

    // Pure virtual functions — each class defines its own rules
    virtual double getBaggageAllowance()     const = 0;  // in KG
    virtual double getLoyaltyMultiplier()    const = 0;  // e.g. 1.5x
    virtual double getRefundPercentage()     const = 0;  // e.g. 0.80 = 80%
    virtual string getPassengerClass()       const = 0;  // "Economy" etc.
    virtual void   displayDetails()          const = 0;

    // Operator overload
    friend ostream& operator<<(ostream& out, const Passenger& p);

    virtual ~Passenger();
};

#endif
