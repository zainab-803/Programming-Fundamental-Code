#include <iostream>
using namespace std;

void reverseArray(int *arr, int size) 
{
    int *start = arr; // array ka pehla element
    int *end = arr + size - 1; // array ka last element

    while (start < end) 
    {
        // start aur end ki values swap karo
        int temp = *start;
        *start = *end;
        *end = temp;

        start++; // agay barho
        end--; // peechay aao
    }
}

int main() 
{
    int n;
    cout << "Array ka size enter karo: ";
    cin >> n;

    int *arr = new int[n]; // dynamically memory li

    cout << n << " elements enter karo: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    delete[] arr; // memory free karna zaruri hai
    return 0;
}