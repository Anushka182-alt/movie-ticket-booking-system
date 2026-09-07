#ifndef MOVIE_H
#define MOVIE_H
#include <string>
using namespace std;

class Movie {
    int id;
    string title;
    string genre;
    int duration;
public:
    Movie(int id, string title, string genre, int duration);
    void display() const;
    int getId() const;
    string getTitle() const;
};
#endif
