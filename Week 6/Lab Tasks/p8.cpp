#include<iostream>
using namespace std;

main()
{
    char word[100];
    cout << "Enter a word: ";
    cin >> word;

    for(int i = 0; word[i] != '\0'; i = i + 1)
    {
        cout << word[i] << " found at position " << i << endl;
    }
}