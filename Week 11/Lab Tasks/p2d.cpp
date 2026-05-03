#include <iostream>
#include <string>
using namespace std;

// Function to count cars of a specific color
int converter(string cars[][3], int rows, int cols, string color)
{
    int count = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(cars[i][j] == color)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    // 2D array of car colors
    string cars[2][3] = {
        {"Red", "Blue", "Black"},
        {"Blue", "Red", "Blue"}
    };

    string color;

    cout << "Enter color to search: ";
    cin >> color;

    int result = converter(cars, 2, 3, color);

    cout << "Total number of " << color << " cars = " << result << endl;

    return 0;
}
