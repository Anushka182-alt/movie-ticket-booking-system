#ifndef SHOWSEAT_H
#define SHOWSEAT_H
#include "Seat.h"

class ShowSeat {
    Seat seat;
public:
    ShowSeat(string number, SeatType type);
    Seat& getSeat();
    const Seat& getSeat() const;
};
#endif
