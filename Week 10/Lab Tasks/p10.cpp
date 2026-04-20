#include<iostream>
using namespace std;
string checkAlphabetCase(char ch);

main()
{
    char ch;
    cout << "Enter a character (A/a): ";
    cin >> ch;
    string result;
    result = checkAlphabetCase(ch);
    cout << result;

}
string checkAlphabetCase( char ch)
{
    if(ch == 'A')
    {
        cout << "You have entered Capital " << ch;
    }
    else
    {
        cout << "You have entered small " << ch;
    }
    
}