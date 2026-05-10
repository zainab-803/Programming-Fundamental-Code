#include<iostream>
using namespace std;

void modifyWithPointer(int *p)
{
    *p = 50;
}
void modifyWithReference(int &r)
{
    r = 100;
}

main()
{
    int a = 10;
    int b = 20;
    modifyWithPointer(&a);
    modifyWithReference(b);

    cout << "Value of a after pointer modification: " << a << endl;
    cout << "Value of b after reference modification: " << b << endl;

    return 0;
}