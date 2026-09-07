#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include "Payment.h"
class CashPayment : public Payment {
public:
    bool pay(double amount) override;
    string method() const override;
};
#endif
