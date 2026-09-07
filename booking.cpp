#include "Booking.h"
#include <iostream>
using namespace std;
int Booking::nextId = 1001;
Booking::Booking(Customer customer, Show* show, vector<string> seats, int total, string paymentMethod)
    : id(nextId++), customer(customer), show(show), seatNumbers(seats),
      total(total), paymentMethod(paymentMethod), active(true) {}
int Booking::getId() const { 
return id;
}
bool Booking::isActive() const { 
return active;
}
void Booking::cancel() { 
active = false;
}
void Booking::display() const {
    cout << "Booking #" << id << " | " << customer.getName()
         << " | " << show->getMovie().getTitle() << " | Seats: ";
    for (auto& s : seatNumbers) cout << s << ' ';
    cout << "| Rs." << total << " | " << (active ? "ACTIVE" : "CANCELLED") << '\n';
}
