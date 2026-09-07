#ifndef PRICECALCULATOR_H
#define PRICECALCULATOR_H
#include "Seat.h"
#include <vector>
using namespace std;
class PriceCalculator {
public:
    static int calculate(const vector<Seat*>& seats);
};
#endif
