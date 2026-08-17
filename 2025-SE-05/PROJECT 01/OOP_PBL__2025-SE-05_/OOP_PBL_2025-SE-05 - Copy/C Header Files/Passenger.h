#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
#include <iostream>

// Abstract base class for all passenger types.
// Derived classes define baggage allowance, loyalty multiplier, and refund rules.
class Passenger {
protected:
    std::string passengerID;
    std::string name;
    std::string email;
    std::string phone;
    int         loyaltyPoints;

public:
    Passenger(const std::string& id, const std::string& name,
              const std::string& email, const std::string& phone);

    virtual ~Passenger() = default;

    virtual double      getBaggageAllowance()                            const = 0;
    virtual double      getLoyaltyMultiplier()                           const = 0;
    virtual double      getCancellationRefundPercent(int daysBefore)     const = 0;
    virtual std::string getPassengerClass()                              const = 0;
    virtual void        displayDetails()                                 const = 0;

    std::string getPassengerID()   const;
    std::string getName()          const;
    std::string getEmail()         const;
    std::string getPhone()         const;
    int         getLoyaltyPoints() const;

    // Awards points based on fare paid and this passenger's multiplier
    void addLoyaltyPoints(double fare);

    // Directly set points (used when loading from file)
    void setLoyaltyPoints(int points);

    friend std::ostream& operator<<(std::ostream& os, const Passenger& p);

    virtual std::string serialize() const;
};

// Economy: 20 kg baggage, 1x points, stricter refund policy
class EconomyPassenger : public Passenger {
public:
    EconomyPassenger(const std::string& id, const std::string& name,
                     const std::string& email, const std::string& phone);

    double      getBaggageAllowance()                        const override { return 20.0; }
    double      getLoyaltyMultiplier()                       const override { return 1.0; }
    double      getCancellationRefundPercent(int daysBefore) const override;
    std::string getPassengerClass()                          const override { return "Economy"; }
    void        displayDetails()                             const override;
    std::string serialize()                                  const override;
};

// Business: 40 kg baggage, 2x points, moderate refund policy
class BusinessPassenger : public Passenger {
public:
    BusinessPassenger(const std::string& id, const std::string& name,
                      const std::string& email, const std::string& phone);

    double      getBaggageAllowance()                        const override { return 40.0; }
    double      getLoyaltyMultiplier()                       const override { return 2.0; }
    double      getCancellationRefundPercent(int daysBefore) const override;
    std::string getPassengerClass()                          const override { return "Business"; }
    void        displayDetails()                             const override;
    std::string serialize()                                  const override;
};

// First Class: 60 kg baggage, 3x points, most generous refund policy
class FirstClassPassenger : public Passenger {
public:
    FirstClassPassenger(const std::string& id, const std::string& name,
                        const std::string& email, const std::string& phone);

    double      getBaggageAllowance()                        const override { return 60.0; }
    double      getLoyaltyMultiplier()                       const override { return 3.0; }
    double      getCancellationRefundPercent(int daysBefore) const override;
    std::string getPassengerClass()                          const override { return "FirstClass"; }
    void        displayDetails()                             const override;
    std::string serialize()                                  const override;
};

#endif
