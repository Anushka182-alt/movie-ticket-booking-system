#include "Customer.h"
Customer::Customer(int id, string name, string phone) : id(id), name(name), phone(phone) {}
string Customer::getName() const { return name; }
string Customer::getPhone() const { return phone; }
