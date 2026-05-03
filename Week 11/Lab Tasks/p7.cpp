#include <iostream>
using namespace std;

void largestColumnFirst(int M[][5], int rows)
{
    int maxSum = 0, maxCol = 0;

    for(int j = 0; j < 5; j++)
    {
        int sum = 0;

        for(int i = 0; i < rows; i++)
        {
            sum = sum + M[i][j];
        }

        if(j == 0 || sum > maxSum)
        {
            maxSum = sum;
            maxCol = j;
        }
    }
    for(int i = 0; i < rows; i++)
    {
        int temp = M[i][0];
        M[i][0] = M[i][maxCol];
        M[i][maxCol] = temp;
    }
}
void printMatrix(int M[][5], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    int M[100][5];  

    cout << "Enter elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> M[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    printMatrix(M, rows);
    largestColumnFirst(M, rows);

    cout << "\nAfter Swapping Largest Column with First Column:\n";
    printMatrix(M, rows);

    return 0;
}
