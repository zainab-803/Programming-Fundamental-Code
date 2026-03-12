#include<iostream>
using namespace std;

main()
{
    int num,even;
    cout << " enter number ";
    cin>>num;
    even = num%2;
    if (even == 0)
    {
        cout << " the number is even ";
    }
    else
    {
        cout << " the number is odd";
    }
}