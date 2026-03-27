#include<iostream>
using namespace std;

main()
{
    int n;
    cout << " How many numbers wants to enter: ";
    cin >> n;

    int numbers[n];
    cout << " Enter " << n << "numbers: " << endl;
    for(int count = 0; count < n; count = count + 1)
    {
        cin >> numbers[count];
    }
    cout << " The numbers you entered are: ";
    for(int count = 0; count < n; count = count + 1)
    {
        cout << numbers[count] << " ";
    }

}