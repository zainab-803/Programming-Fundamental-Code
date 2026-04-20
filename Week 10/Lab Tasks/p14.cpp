#include<iostream>
using namespace std;

string numberInWords(int num);

main()
{
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;
    cout << numberInWords(number);
}
string numberInWords(int num)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Tewnty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if(num < 1 || num > 99)
    {
        cout << "Out of range " << endl;
    }
    else if(num < 10)
    {
        cout << ones[num];
    }
    else if(num >= 10 && num < 20)
    {
        cout << teens[num - 10];
    }
    else 
    {
        int x = num / 10;
        int y = num % 10;
        if(y == 0)
        {
            cout << tens[x];
        }
        else
        {
            cout << tens[x]+ "" + ones[y];
        }
    }
}