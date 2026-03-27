#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[100];
    int unique[100];
    int k = 0;

    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];

        bool isDuplicate = false;

        for(int j = 0; j < k; j++)
        {
            if(numbers[i] == unique[j])
            {
                isDuplicate = true;
            }
        }
        if(!isDuplicate)
        {
            unique[k] = numbers[i];
            k++;
        }
        else
        {
            cout << "Already Entered: " << numbers[i] << endl;
        }
    }
    cout << "Unique numbers entered: ";
    for(int i = 0; i < k; i++)
    {
        cout << unique[i] << " ";
    }
}
