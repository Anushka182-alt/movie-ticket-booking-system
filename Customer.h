#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;
class Customer {
    int id;
    string name;
    string phone;
public:
    Customer(int id, string name, string phone);
    string getName() const;
    string getPhone() const;
};
#endif
