#include "Screen.h"
#include <iostream>
using namespace std;

Screen::Screen(int id, string name, int rows, int seatsPerRow) : id(id), name(name) {
    for (int r = 0; r < rows; ++r) {
        SeatType type = r < 2 ? SeatType::SILVER : (r < 4 ? SeatType::GOLD : SeatType::PLATINUM);
        char row = char('A' + r);
        for (int s = 1; s <= seatsPerRow; ++s)
            seats.emplace_back(string(1, row) + to_string(s), type);
    }
}
void Screen::displaySeats() const {
    cout << "\n--- " << name << " Seat Layout ---\n";
    for (const auto& ss : seats) {
        const Seat& s = ss.getSeat();
        cout << s.getNumber() << "[" << Seat::typeToString(s.getType())
             << (s.isBooked() ? ", BOOKED" : ", AVAILABLE") << "]  ";
        if (s.getNumber().back() == '8') cout << '\n';
    }
}
ShowSeat* Screen::findSeat(const string& number) {
    for (auto& ss : seats) if (ss.getSeat().getNumber() == number) return &ss;
    return nullptr;
}
vector<ShowSeat>& Screen::getSeats() { return seats; }
string Screen::getName() const { return name; }
