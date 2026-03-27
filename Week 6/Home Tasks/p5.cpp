#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter number of customers: ";
    cin >> n;

    string customers[n];
    cout << "Enter the name of " << n << " customers: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> customers[i];
    }

    char letter;
    cout << "Enter a letter to check: ";
    cin >> letter;

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(customers[i][0] == letter)
        {
            count++;
        }
    }
    cout << "Total names starting with '" << letter << "':" << count;
}