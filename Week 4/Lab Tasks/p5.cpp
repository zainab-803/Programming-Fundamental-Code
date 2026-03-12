#include<iostream>
using namespace std;

main()
{
    char going;
    cout << " Are your friends going university ? (press Y for yes)";
    cin>>going;

    if(going == 'y')
    {
        cout << " you are also going!";
    }
    else
    {
        cout << " yor are not going ";
    }
}