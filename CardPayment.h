#ifndef CARDPAYMENT_H
#define CARDPAYMENT_H
#include "Payment.h"
class CardPayment : public Payment {
public:
    bool pay(double amount) override;
    string method() const override;
};
#endif
