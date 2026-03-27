#include<iostream>
using namespace std;

main()
{
    string word;
    char letter;
    bool isFound = false;
    
    cout << " Enter a Word: ";
    cin >> word;

    cout << " Enter the character you want to find: ";
    cin >> letter;

    for(int i = 0; word[i] != '\0'; i = i + 1)
    {
        if(word[i] == letter)
        {
            isFound = true;
        }
    }
    if(isFound)
    {
        cout << letter << " is found in " << word;
    }
    else 
    {
        cout << letter << " is not found in " << word;
    }
}