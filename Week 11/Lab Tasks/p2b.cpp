#include <iostream>
using namespace std;

int countRedCars(int cars[][5], int rowSize);

int main()
{
    const int rowSize = 5;

    string names[rowSize] = {
        "Suzuki",
        "Toyota",
        "Nissan",
        "BMW",
        "Audi"
    };

    int cars[rowSize][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };

    int totalRed = countRedCars(cars, rowSize);

    cout << "Total Red Cars in company: " << totalRed << endl;

    return 0;
}

int countRedCars(int cars[][5], int rowSize)
{
    int count = 0;

    for (int i = 0; i < rowSize; i++)
    {
        if (cars[i][0] > 0) 
        {
            count++;
        }
    }

    return count;
}
