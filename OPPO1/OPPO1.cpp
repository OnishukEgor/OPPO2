#include <iostream>
#include "FileRead.h"
#include "PrintData.h"
using namespace std;

int main()
{
    vector<FuelCost> VectorFuel = readDataFromFile("in.txt");
    printData(VectorFuel);

    return 0;
}