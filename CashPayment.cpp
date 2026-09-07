#include "CashPayment.h"
#include <iostream>
using namespace std;
bool CashPayment::pay(double amount) {
    cout << "Cash payment of Rs." << amount << " received.\n"; return true;
}
string CashPayment::method() const { return "Cash"; }
