#include <iostream>
using namespace std;

// Function to print transpose of matrix
void converter(int arr[][3], int rows, int cols)
{
    cout << "Transpose Matrix:\n";

    // Rows become columns
    for(int j = 0; j < cols; j++)
    {
        for(int i = 0; i < rows; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Original Matrix:\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Call function
    converter(arr, 2, 3);

    return 0;
}
