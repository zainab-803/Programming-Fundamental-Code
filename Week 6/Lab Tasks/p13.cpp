#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[100];
    cout << "Enter " << n << " numbers, one per line: " << endl;
    for(int i = 0; i < n; i = i + 1)
    {
        cin >> numbers[i];
    }
    int largest = numbers[0];
    for(int i = 1; i < n; i = i + 1)
    {
        if(numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    cout << "Largest number is: " << largest << endl;
}