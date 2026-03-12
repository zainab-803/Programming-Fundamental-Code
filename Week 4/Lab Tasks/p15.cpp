#include<iostream>
using namespace std;

main()
{
    string name1,name2,name3;
    int age1,age2,age3;

    cout << " enter first brother name: ";
    cin>>name1;
    cout << " enter first brother age: ";
    cin>>age1;

    cout << " enter secong brother name: ";
    cin>>name2;
    cout << " enter second brother age: ";
    cin>>age2;

    cout << " enter third brother name: ";
    cin>>name3;
    cout << " enter third brother age: ";
    cin>>age3;

    if(age1 <= age2 && age1 <= age3)
    {
        cout << " The youngest brother is: "<<name1;
    }
    else if(age2 <= age1 && age2 <= age3)
    {
        cout << " The youngest brother is: "<<name2;
    }
    else
    {
        cout << " The youngest brother is: "<<name3;
    }  
    
}