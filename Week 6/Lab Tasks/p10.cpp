#include<iostream>
using namespace std;

main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Shifted String ";

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];   
        int asci = ch;     

        if(ch == 'z')
        {
            ch = 'a';
        }
        else
        {
            ch = asci + 1;   
        }
        cout << ch;
    }
}
