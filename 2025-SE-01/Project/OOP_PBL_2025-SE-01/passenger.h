#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>

using namespace std;

class Passenger
{
protected:
    string name;
    string id;

public:
    Passenger(string n, string i);

    virtual double getDiscount() = 0;
    virtual double refundPercent() = 0;

    string getName() const;
    string getId() const;

    virtual void display() = 0;

    virtual ~Passenger();
};

// =====================
// Economy Passenger
// =====================

class EconomyPassenger : public Passenger
{
public:
    EconomyPassenger(string n, string i);

    double getDiscount() override;
    double refundPercent() override;
    void display() override;
};

// =====================
// Business Passenger
// =====================

class BusinessPassenger : public Passenger
{
public:
    BusinessPassenger(string n, string i);

    double getDiscount() override;
    double refundPercent() override;
    void display() override;
};

// =====================
// First Class Passenger
// =====================

class FirstClassPassenger : public Passenger
{
public:
    FirstClassPassenger(string n, string i);

    double getDiscount() override;
    double refundPercent() override;
    void display() override;
};

#endif
