#include <iostream>
using namespace std;

string fire(char arr[5][5], int row, int col)
{
    if(arr[row][col] == '*')
    {
        return "BOOM";
    }
    else
    {
        return "splash";
    }
}

int main()
{
    
    char arr[5][5] = 
    {
        {'.', '.', '*', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '.', '*', '.'},
        {'*', '.', '.', '.', '.'},
        {'.', '.', '*', '.', '*'}
    };

    int row, col;

    // Input
    cout << "Enter row (0-4): ";
    cin >> row;

    cout << "Enter column (0-4): ";
    cin >> col;

    // Function call
    string result = fire(arr, row, col);

    cout << result;

    return 0;
}
