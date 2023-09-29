#ifndef PRINTDATA_H
#define PRINTDATA_H

#include <iostream>
#include <vector>
#include "FuelCost.h"
using namespace std;

void printData(const vector<FuelCost>& data)
{
    for (const auto& entry : data)
    {
        cout << "Type Fuel: " << entry.typeFuel << " Date: " << entry.date << "." << entry.month << "." << entry.year << " Cost: " << entry.Price << "\n";
    }
}

#endif