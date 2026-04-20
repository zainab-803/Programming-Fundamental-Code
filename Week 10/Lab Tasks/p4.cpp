#include<iostream>
#include<cmath>
using namespace std;

main()
{
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "The minimum of "<< number1 << " and " << number2 << " is: " << min(number1, number2);
    return 0;
}