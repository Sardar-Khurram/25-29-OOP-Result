#ifndef BUSINESSPASSENGER_H
#define BUSINESSPASSENGER_H

#include "Passenger.h"

class BusinessPassenger : public Passenger {
private:
    bool loungeAccess;    // business lounge at airport

public:
    BusinessPassenger(string id, string nm, string email,
                      string phone, bool lounge = true);

    double getBaggageAllowance()  const override;  // 35 KG
    double getLoyaltyMultiplier() const override;  // 1.5x
    double getRefundPercentage()  const override;  // 75%
    string getPassengerClass()    const override;
    void   displayDetails()       const override;

    ~BusinessPassenger();
};

#endif
