#ifndef FIRSTCLASSPASSENGER_H
#define FIRSTCLASSPASSENGER_H

#include "Passenger.h"

class FirstClassPassenger : public Passenger {
private:
    string dedicatedHost;    // personal host name assigned

public:
    FirstClassPassenger(string id, string nm, string email,
                        string phone, string host = "None");

    double getBaggageAllowance()  const override;  // 50 KG
    double getLoyaltyMultiplier() const override;  // 2.0x
    double getRefundPercentage()  const override;  // 90%
    string getPassengerClass()    const override;
    void   displayDetails()       const override;

    ~FirstClassPassenger();
};

#endif
