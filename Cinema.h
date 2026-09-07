#ifndef CINEMA_H
#define CINEMA_H
#include "Screen.h"
#include <vector>
#include <string>
using namespace std;

class Cinema {
    string name;
    vector<Screen> screens;
public:
    Cinema(string name);
    Screen& getScreen(int index);
    void displayScreens() const;
};
#endif
