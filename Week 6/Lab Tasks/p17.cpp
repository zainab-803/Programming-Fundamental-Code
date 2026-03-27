#include<iostream>
using namespace std;

int main()
{
    char a[100];
    char result[200] = "Something ";
    cout << "Enter the argument 'a': ";
    cin.getline(a, 100);
    int i = 0;
    while(result[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while(a[j] != '\0')
    {
        result[i] = a[j];
        i++;
        j++;
    }
    result[i] = '\0';
    cout << "Result: " << result << endl;
}
