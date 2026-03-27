#include<iostream>
using namespace std;

main()
{
    string chords[100];
    int n;
    cout << "Enter the number of chords: ";
    cin >> n;

    cout << "Enter " << n << " chords, one per line: " << endl;
    for (int i = 0;i < n; i++)
    {
        cin >> chords[i];
    }

     for(int i = 0; i < n; i++) 
     {
        string chord = chords[i];
        char lastChar;
        for(int j = 0; chord[j] != '\0'; j++) 
        {
            lastChar = chord[j];  
        }
        if(lastChar != '7') 
        {
            chords[i] = chord + "7";  
        }
    }
    cout << "Jazzified chords: ";
    for(int i = 0; i < n; i++)
    {
        cout << chords[i] << " ";
    }
}