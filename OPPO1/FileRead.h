#ifndef FILEREADER_H
#define FILEREADER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "FuelCost.h"
using namespace std;

vector<FuelCost> readDataFromFile(const string& fileName)
{
    vector<FuelCost> VectorFuel;
    FuelCost fuel;
    ifstream in(fileName);

    if (!in)
    {
        cout << "Opening file error\n";
        return VectorFuel;
    }

    string line;
    while (getline(in, line))
    {
        istringstream Stream(line);

        Stream >> fuel.typeFuel;

        string date, day, month, year;
        Stream >> date;
        stringstream dateStream(date);
        getline(dateStream, date, '.');
        getline(dateStream, month, '.');
        getline(dateStream, year, '.');
        fuel.date = stoi(date);
        fuel.month = stoi(month);
        fuel.year = stoi(year);

        Stream >> fuel.Price;

        VectorFuel.push_back(fuel);
    }

    in.close();

    return VectorFuel;
}

#endif