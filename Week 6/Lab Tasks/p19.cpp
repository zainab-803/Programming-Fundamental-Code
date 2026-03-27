#include<iostream>
using namespace std;

int main()
{
    int arr[100], n;
    bool isSpecial = true;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " elements of the array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0 && arr[i] % 2 != 0)
        {
            isSpecial = false;
        }
        if(i % 2 != 0 && arr[i] % 2 == 0)
        {
            isSpecial = false;
        }
    }
    if(isSpecial)
    {
        cout << "The array is special ";
    }   
    else
    {
        cout << "The array is not spepcial";
    }
}
