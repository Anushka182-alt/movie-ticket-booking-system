#ifndef BOOKING_H
#define BOOKING_H
#include "Customer.h"
#include "Show.h"
#include <vector>
#include <string>
using namespace std;
class Booking {
    static int nextId;
    int id;
    Customer customer;
    Show* show;
    vector<string> seatNumbers;
    int total;
    string paymentMethod;
    bool active;
public:
    Booking(Customer customer, Show* show, vector<string> seats, int total, string paymentMethod);
    int getId() const;
    bool isActive() const;
    void cancel();
    void display() const;
};
#endif
