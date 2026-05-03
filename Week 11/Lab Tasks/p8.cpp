#include <iostream>
using namespace std;

// Function to count identical rows
int countIdenticalArrays(int arr[][3], int rows)
{
    int count = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = i + 1; j < rows; j++)
        {
            // check if row i and row j are identical
            if(arr[i][0] == arr[j][0] &&
               arr[i][1] == arr[j][1] &&
               arr[i][2] == arr[j][2])
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    int arr[100][3];

    cout << "Enter elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Count of identical rows = "
         << countIdenticalArrays(arr, rows);

    return 0;
}
