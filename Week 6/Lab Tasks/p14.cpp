#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;

    float resistance[100];
    float total = 0;
    cout << "Enter the resistance value (in ohms) of the " << n << " resistors, ope per line: " << endl;
    for(int i = 0; i < n; i = i + 1)
    {
        cin >> resistance[i];
        total = total + resistance[i];
    }
    cout << "The total resistance of the series circuit is " << total << " ohms. " << endl;
}