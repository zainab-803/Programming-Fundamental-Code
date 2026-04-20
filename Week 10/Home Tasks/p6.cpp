#include<iostream>
using namespace std;

bool isStrong(int num);

main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    if(isStrong(num))
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}

bool isStrong(int num)
{
    int original = num;
    int sum = 0;

    while(num > 0)
    {
        int digit = num % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
        return true;
    else
        return false;
}
