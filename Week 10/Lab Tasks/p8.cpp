#include<iostream>
#include<cmath>
using namespace std;

main()
{
    double a, b, c;
    double discriminant, x1, x2, imagPart, realPart ;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    discriminant = b*b - 4*a*c;
    if(discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Solutions: ";
        cout << " x1 = " << x1 << " and ";
        cout << " x2 = " << x2 << endl;
    }
    else if(discriminant == 0)
    {
        x1 = -b / (2*a);

        cout << "Solutions: " << " x1 = " << x1 << endl;
    }
    else
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);

        cout << "Complex Solutions:" << " x1 = "<< realPart << " + " << imagPart << "i and x2 = "<< realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}