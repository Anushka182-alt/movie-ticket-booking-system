#ifndef BOOKINGSERVICE_H
#define BOOKINGSERVICE_H
#include "Booking.h"
#include "Payment.h"
#include <vector>
#include <memory>
class BookingService {
    std::vector<std::unique_ptr<Booking>> bookings;
public:
    Booking* createBooking(const Customer&, Show&, const std::vector<std::string>&, Payment&);
    bool cancelBooking(int);
    void displayBookings() const;
};
#endif
