#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter numbers of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter " << n << " numbers: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + numbers[i];
    }
    cout << "Sum of all elements: " << sum;
}