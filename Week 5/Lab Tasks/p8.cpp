#include<iostream>
using namespace std;

main()
{
    int number;
    cout << " Enter a positive number: ";
    cin >> number;
    while(number <=0)
    {
        cout << " Error "<< number <<" is not a positive number "<<endl;
        cout << " Please enter the positive number: ";
        cin >> number;
    }
    if(number>0)
    {
        cout << " Program Ends";
    }
}