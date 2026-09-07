#include "ShowSeat.h"
ShowSeat::ShowSeat(string number, SeatType type) : seat(number, type) {}
Seat& ShowSeat::getSeat() { return seat; }
const Seat& ShowSeat::getSeat() const { return seat; }
