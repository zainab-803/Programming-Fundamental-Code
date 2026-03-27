#include<iostream>
using namespace std;

main()
{
    int coins[4];
    double values[4] = {0.25, 0.10, 0.05, 0.01};
    double due;

    cout << "Enter the number of quarters, dimes, nickels, pennies: " << endl;
    for(int i = 0; i < 4; i++)
    {
        cin >> coins[i];
    }
    cout << "Enter the total amount due: ";
    cin >> due;

    double total = 0;
    for (int i = 0; i < 4; i++)
    {
        total = total + (coins[i] * values[i]);
    }
    if(total >= due)
    {
        cout << "Can you pay the amount? Yes ";
    }
    else
    {
        cout << "Can you pay the amount? No ";
    }
}