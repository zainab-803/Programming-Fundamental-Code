#include<iostream>
using namespace std;

main()
{
        int speed;
        cout << "Enter the speed: ";
        cin >> speed;
        if(speed <=10)
        {
                cout << " Slow ";
        }
        else if(speed > 10 && speed <= 50)
        {
                cout << " Average ";
        }
        else if(speed >50 && speed <=150 )
        {
                cout << " Fast "; 
        }
        else if(speed > 150 && speed <=1000)
        {
                cout << " Ultra Fast ";
        }
        else
        {
                cout << " Extremely Fast ";
        }
}