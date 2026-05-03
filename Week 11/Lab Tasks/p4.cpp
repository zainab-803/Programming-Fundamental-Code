#include <iostream>
using namespace std;

bool checkIdentity(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)   // diagonal
            {
                if(arr[i][j] != 1)
                {
                    return false;
                }
            }
            else   // non-diagonal
            {
                if(arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int arr[3][3];

    // Input
    cout << "Enter 3x3 matrix:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Function call
    if(checkIdentity(arr))
    {
        cout << "It is an Identity Matrix";
    }
    else
    {
        cout << "It is NOT an Identity Matrix";
    }
    return 0;
}
