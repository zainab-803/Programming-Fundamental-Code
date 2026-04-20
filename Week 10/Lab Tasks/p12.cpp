#include<iostream>
using namespace std;
string checkOddishEvenish(int num);

main()
{
    int number;
    cout << "Enter a five-digit numnber: ";
    cin >> number;
    cout << checkOddishEvenish(number);
}
string checkOddishEvenish(int num)
{
    int sum = 0;
    while(num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    if(sum % 2 == 0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}