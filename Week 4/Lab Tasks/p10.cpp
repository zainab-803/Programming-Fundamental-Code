#include<iostream>
using namespace std;

main()
{
    string my_password , user_password;
    my_password = "Pass@123!";
    cout << " enter the password ";
    cin>>user_password;
    if(my_password==user_password)
    {
        cout << " the password is same ";
    }
    else
    {
        cout << " the password is not same ";
    }
}