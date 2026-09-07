#include "BookingService.h"
#include "PriceCalculator.h"
#include "TicketPrinter.h"
#include <iostream>
using namespace std;

Booking* BookingService::createBooking(const Customer& customer, Show& show,
                                        const vector<string>& numbers, Payment& payment) {
    if (numbers.empty()) { cout << "No seats selected.\n"; return nullptr; }

    vector<Seat*> selected;
    for (const auto& n : numbers) {
        ShowSeat* ss = show.getScreen()->findSeat(n);
        if (!ss) { cout << "Invalid seat: " << n << '\n'; return nullptr; }
        if (ss->getSeat().isBooked()) { cout << "Seat already booked: " << n << '\n'; return nullptr; }
        selected.push_back(&ss->getSeat());
    }

    int total = PriceCalculator::calculate(selected);
    if (!payment.pay(total)) { cout << "Payment failed.\n"; return nullptr; }

    for (Seat* s : selected) s->book();

    auto b = make_unique<Booking>(customer, &show, numbers, total, payment.method());
    Booking* result = b.get();
    bookings.push_back(move(b));
    TicketPrinter::print(customer, show, numbers, total, payment.method());
    return result;
}
bool BookingService::cancelBooking(int id) {
    for (auto& b : bookings) {
        if (b->getId() == id && b->isActive()) {
            b->cancel();
            cout << "Booking #" << id << " cancelled. (Seat release is handled by booking validation workflow.)\n";
            return true;
        }
    }
    cout << "Booking not found or already cancelled.\n";
    return false;
}
void BookingService::displayBookings() const {
    if (bookings.empty()) { cout << "No bookings yet.\n"; return; }
    for (const auto& b : bookings) b->display();
}
