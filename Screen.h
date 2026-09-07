#ifndef SCREEN_H
#define SCREEN_H
#include "ShowSeat.h"
#include <vector>
#include <string>
using namespace std;

class Screen {
    int id;
    string name;
    vector<ShowSeat> seats;
public:
    Screen(int id, string name, int rows = 5, int seatsPerRow = 8);
    void displaySeats() const;
    ShowSeat* findSeat(const string& number);
    vector<ShowSeat>& getSeats();
    string getName() const;
};
#endif
