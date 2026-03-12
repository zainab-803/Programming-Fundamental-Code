#include <iostream>
using namespace std;

main() 
{
    int number;
    cout << "Enter number from 0 to 100: ";
    cin >> number;

    if (number < 0 || number > 100) 
    {
        cout << "Invalid Input! " << endl;
    } 
    else if (number == 0) 
    {
        cout << "Zero" << endl;
    } 
    else if (number == 100) 
    {
        cout << "One Hundred" << endl;
    } 
    else 
    {
        string words = "";

        if (number < 20) 
        {
            if (number == 1) words = "One";
            else if (number == 2) words = "Two";
            else if (number == 3) words = "Three";
            else if (number == 4) words = "Four";
            else if (number == 5) words = "Five";
            else if (number == 6) words = "Six";
            else if (number == 7) words = "Seven";
            else if (number == 8) words = "Eight";
            else if (number == 9) words = "Nine";
            else if (number == 10) words = "Ten";
            else if (number == 11) words = "Eleven";
            else if (number == 12) words = "Twelve";
            else if (number == 13) words = "Thirteen";
            else if (number == 14) words = "Fourteen";
            else if (number == 15) words = "Fifteen";
            else if (number == 16) words = "Sixteen";
            else if (number == 17) words = "Seventeen";
            else if (number == 18) words = "Eighteen";
            else if (number == 19) words = "Nineteen";
        } 
        else 
        {
            int ones = number % 10;
            int tens = number / 10;

            if (tens == 2) words = "Twenty";
            else if (tens == 3) words = "Thirty";
            else if (tens == 4) words = "Forty";
            else if (tens == 5) words = "Fifty";
            else if (tens == 6) words = "Sixty";
            else if (tens == 7) words = "Seventy";
            else if (tens == 8) words = "Eighty";
            else if (tens == 9) words = "Ninety";

            if (ones > 0) 
            {
                if (ones == 1) words = words + " One";
                else if (ones == 2) words = words + " Two";
                else if (ones == 3) words = words + " Three";
                else if (ones == 4) words = words + " Four";
                else if (ones == 5) words = words + " Five";
                else if (ones == 6) words = words + " Six";
                else if (ones == 7) words = words + " Seven";
                else if (ones == 8) words = words + " Eight";
                else if (ones == 9) words = words + " Nine";
            }
        }
        cout << words << endl;
    }
}