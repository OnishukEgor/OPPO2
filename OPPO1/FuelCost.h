#ifndef FUELCOST_H
#define FUELCOST_H

#include <string>
using namespace std;

struct FuelCost
{
    string typeFuel;
    int date, month, year;
    double Price;
};

#endif