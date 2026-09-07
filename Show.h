#ifndef SHOW_H
#define SHOW_H
#include "Movie.h"
#include "Screen.h"
#include <string>
using namespace std;
class Show {
    int id;
    Movie movie;
    Screen* screen;
    string time;
public:
    Show(int id, Movie movie, Screen* screen, string time);
    void display() const;
    int getId() const;
    Screen* getScreen() const;
    Movie getMovie() const;
    string getTime() const;
};
#endif
