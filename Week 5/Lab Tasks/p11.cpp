#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter First positive integers: ";
    cin >> num1;
    cout << " Enter the Second positive integer: ";
    cin >> num2;
    int a = num1;
    int b = num2;
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    int lcm = (num1 * num2) / gcd;
    cout << "GCD: "<< gcd << endl;
    cout << "LCM: " << lcm << endl;
}