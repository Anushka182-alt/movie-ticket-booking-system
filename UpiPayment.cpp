#include "UpiPayment.h"
#include <iostream>
using namespace std;
bool UpiPayment::pay(double amount) {
    cout << "UPI payment of Rs." << amount << " successful.\n"; return true;
}
string UpiPayment::method() const { return "UPI"; }
