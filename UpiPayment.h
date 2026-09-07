#ifndef UPIPAYMENT_H
#define UPIPAYMENT_H
#include "Payment.h"
class UpiPayment : public Payment {
public:
    bool pay(double amount) override;
    string method() const override;
};
#endif
