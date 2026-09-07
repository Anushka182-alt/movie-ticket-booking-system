#include "CardPayment.h"
#include <iostream>
using namespace std;
bool CardPayment::pay(double amount) {
    cout << "Card payment of Rs." << amount << " successful.\n"; return true;
}
string CardPayment::method() const { return "Card"; }
