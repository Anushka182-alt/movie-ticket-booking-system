#include "Show.h"
#include <iostream>
using namespace std;
Show::Show(int id, Movie movie, Screen* screen, string time)
    : id(id), movie(movie), screen(screen), time(time) {}
void Show::display() const {
    cout << id << ". " << movie.getTitle() << " | " << time
         << " | " << screen->getName() << '\n';
}
int Show::getId() const { return id; }
Screen* Show::getScreen() const { return screen; }
Movie Show::getMovie() const { return movie; }
string Show::getTime() const { return time; }
