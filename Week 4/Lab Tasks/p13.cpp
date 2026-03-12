#include<iostream>
using namespace std;

main()
{
    int num1,num2,result;
    char op;
    cout << " enter the first value: ";
    cin>>num1;
    cout << " enter the operator(+,-,*,/): ";
    cin>>op;
    cout << " enter the second value: ";
    cin>>num2;

    if(op=='+')
    {
        result=num1-num2;
        cout << num1 << "-" << num2 << " = "<<result;        
    }
    if(op=='-')
    {
        result=num1+num2;
        cout << num1 << "+" << num2 << "=" <<result;
    }
    if(op=='*')
    {
    result=num1/num2;
    cout << num1 << "/" << num2 << "=" <<result;
    }
    if(op=='/')
    {
        result=num1*num2;
        cout << num1 << "*" << num2 << "=" << result;
    }   
}