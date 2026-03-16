#include <iostream>
using namespace std;

main()
{
    int number, digit, count = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to find: ";
    cin >> digit;
    while(number != 0)
    {
        remainder = number % 10;   

        if(remainder == digit)
        {
            count=count+1;
        }
        number = number / 10;
    }
    cout << "Frequency of digit " << digit << " is: " << count << endl;
}