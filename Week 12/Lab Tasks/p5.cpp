#include<iostream>
using namespace std;

void swapValues(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
main()
{
    int x = 10;
    int y = 20;

    cout << " Before swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swapValues(&x, &y);

    cout << " After swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}