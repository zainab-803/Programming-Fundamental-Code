#include<iostream>
using namespace std;

main()
{
    int number;
    cout << " Enter a number:";
    cin >> number;
    for(int i=1; i<=10; i=i+1)
    {
        cout << number << " x "<< i << " = " << number*i << endl;
    }
}

    
