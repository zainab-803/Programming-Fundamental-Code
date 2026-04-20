#include<iostream>
#include<cmath>
using namespace std;

main()
{
    int number1, number2;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Greater number is: " << max(number1, number2);
    return 0;

}