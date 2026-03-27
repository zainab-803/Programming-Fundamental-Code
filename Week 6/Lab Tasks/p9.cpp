#include<iostream>
using namespace std;

main()
{
    string str;
    int idx = 0;
    cout << "Enter a string: ";
    cin >> str;

    while(str[idx] != '\0')
    {
        idx++;
    }

    cout << " Reverse string: ";
    for(idx = idx - 1; idx >=0; idx--)
    {
        cout << str[idx];
    }
}