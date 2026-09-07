#include "PriceCalculator.h"
int PriceCalculator::calculate(const vector<Seat*>& seats) {
    int total = 0;
    for (const Seat* s : seats) total += Seat::price(s->getType());
    return total;
}
