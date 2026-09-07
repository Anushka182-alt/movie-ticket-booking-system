#ifndef PAYMENT_H
#define PAYMENT_H
#include <string>
using namespace std;
class Payment {
public:
    virtual ~Payment() = default;
    virtual bool pay(double amount) = 0;
    virtual string method() const = 0;
};
#endif
