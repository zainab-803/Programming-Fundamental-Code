#include<iostream>
using namespace std;
bool isSymmetrical(int num);

main()
{
    int number;
    cout << "Enter a Three-digit number: ";
    cin >> number;
    if(isSymmetrical(number))
    {
        cout << "The number is symmetrical.";
    }   
    else
    {
        cout << "The number is not symmetrical.";
    }       
}
bool isSymmetrical(int num)
{
    int first = num / 100;
    int last = num % 10;

    if(first == last)
    {
        return true;
    }    
    else
    {
        return false;
    }
}