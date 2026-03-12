#include<iostream>
using namespace std;

main()
{
    int temp1,temp2,temperature;
    cout << " Enter Temprature of city 1: ";
    cin >> temp1;
    cout << " Enter Tempratue of city 2: ";
    cin >> temp2;
    temperature = temp1 - temp2;
    if(temperature > 10 )
    {
        cout << " Differencr is too Big "<<endl;
        cout << " Program Ends ";
    }
    else
    {
        cout << " Program Ends ";
    }
}