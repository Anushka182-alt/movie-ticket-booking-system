#include "Cinema.h"
#include <iostream>
using namespace std;
Cinema::Cinema(string name) : name(name) {
    screens.emplace_back(1, "Screen 1");
    screens.emplace_back(2, "Screen 2");
}
Screen& Cinema::getScreen(int index) { return screens.at(index); }
void Cinema::displayScreens() const {
    cout << "\nCinema: " << name << "\n";
    for (size_t i = 0; i < screens.size(); ++i)
        cout << i + 1 << ". " << screens[i].getName() << '\n';
}
