#include<iostream>
using namespace std;

main()
{
    int number, count = 0;
    cout << "Enter number: ";
    cin >> number;
    for(int i = number; i > 0; i = i / 10) 
    {
        count = count + 1;
    }
    cout << "Total Number of Digits: " << count;    
}
