#ifndef ECONOMYPASSENGER_H
#define ECONOMYPASSENGER_H

#include "Passenger.h"

class EconomyPassenger : public Passenger {
private:
    bool mealIncluded;    // economy sometimes has no meal

public:
    EconomyPassenger(string id, string nm, string email,
                     string phone, bool meal = false);

    // Override all pure virtuals
    double getBaggageAllowance()  const override;  // 20 KG
    double getLoyaltyMultiplier() const override;  // 1.0x
    double getRefundPercentage()  const override;  // 50%
    string getPassengerClass()    const override;
    void   displayDetails()       const override;

    ~EconomyPassenger();
};

#endif
