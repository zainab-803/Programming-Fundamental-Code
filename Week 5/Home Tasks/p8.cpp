#include<iostream>
using namespace std;

main()
{
    int number, count = 0;
    cout << " Enter a number:";
    cin >> number;
    for(int i=number; i<0; i/10)
    {
        count = count +1;
    }
    cout << " Total number of digits: "<<count<<endl;
}