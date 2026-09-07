#ifndef SEAT_H
#define SEAT_H
#include <string>
using namespace std;

enum class SeatType { SILVER, GOLD, PLATINUM };

class Seat {
    string number;
    SeatType type;
    bool booked;
public:
    Seat(string number, SeatType type);
    string getNumber() const;
    SeatType getType() const;
    bool isBooked() const;
    bool book();
    void cancel();
    static string typeToString(SeatType type);
    static int price(SeatType type);
};
#endif
