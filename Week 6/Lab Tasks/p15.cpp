#include<iostream>
using namespace std;

main()
{
    int first[2];
    cout << "Enter how many number you want in the array ";
    int secondarraysize;
    cin >> secondarraysize;
    int second[secondarraysize];

    int thirdarraysize = secondarraysize + 2;
    int third [thirdarraysize];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the "<< i+1 <<" Number in first array ";
        cin >> first[i];
    }
    for (int i = 0; i < secondarraysize; i++)
    {
        cout << "Enter the "<< i+1 <<" Number in first array ";
        cin >> second[i];
    }

    third[0] = first[0];
    third[thirdarraysize - 1] = first[1];
    for (int i = 1; i <= thirdarraysize - 2; i++)
    {
        third[i] = second[i - 1];
    }
    for(int i = 0; i < thirdarraysize; i++)
    {
        cout << third[i] << " ";
    }
}