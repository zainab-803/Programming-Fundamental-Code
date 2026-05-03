#include <iostream>
using namespace std;

int countNissanCars(string names[], int rowSize);

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

    int totalNissan = countNissanCars(names, rowSize);

    cout << "Total Nissan Cars in company: " << totalNissan << endl;

    return 0;
}

int countNissanCars(string names[], int rowSize)
{
    int count = 0;

    for (int i = 0; i < rowSize; i++)
    {
        if (names[i] == "Nissan")
        {
            count++;
        }
    }

    return count;
}
