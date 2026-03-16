#include<iostream>
using namespace std;

main()
{
    int number, digit, sum=0;
    cout << " Enter a number: ";
    cin >> number;
    while(number != 0)
    {
        digit = number%10;
        number = number /10;
        sum = sum + digit;
    }
    cout << " Sum of digits is "<< sum << endl;
}