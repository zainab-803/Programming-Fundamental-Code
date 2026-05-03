#include <iostream>
using namespace std;

void printToyotaBlue(int cars[][5], string names[], int rowSize);

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
        {7, 12, 16, 5, 2},
        {3, 5, 6, 2, 1}
    };

    printToyotaBlue(cars, names, rowSize);

    return 0;
}

void printToyotaBlue(int cars[][5], string names[], int rowSize)
{

    for (int i = 0; i < rowSize; i++)
    {
        if (names[i] == "Toyota")
        {
            cout << "Toyota Blue cars: " << cars[i][3] << endl;
        }
    }
}
