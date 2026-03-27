#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter " << n << " numbers: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(numbers[i] % 2 == 0)
        {
            count = count + 1;
        }
    }
    cout << "Total Even Numbers: " << count;
}