#include "Seat.h"
Seat::Seat(string number, SeatType type) : number(number), type(type), booked(false) {}
string Seat::getNumber() const { return number; }
SeatType Seat::getType() const { return type; }
bool Seat::isBooked() const { return booked; }
bool Seat::book() { if (booked) return false; booked = true; return true; }
void Seat::cancel() { booked = false; }
string Seat::typeToString(SeatType type) {
    if (type == SeatType::SILVER) return "SILVER";
    if (type == SeatType::GOLD) return "GOLD";
    return "PLATINUM";
}
int Seat::price(SeatType type) {
    if (type == SeatType::SILVER) return 150;
    if (type == SeatType::GOLD) return 250;
    return 400;
}
