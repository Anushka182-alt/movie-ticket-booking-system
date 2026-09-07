#include "Movie.h"
#include <iostream>
using namespace std;
Movie::Movie(int id, string title, string genre, int duration)
    : id(id), title(title), genre(genre), duration(duration) {}
void Movie::display() const {
    cout << id << ". " << title << " | " << genre
         << " | " << duration << " min\n";
}
int Movie::getId() const { return id; }
string Movie::getTitle() const { return title; }
