#include<iostream>
using namespace std;
void timetravel(int hour, int minute);

main()
{
    int hour, minute;
    cout << "Enter Hour: ";
    cin >> hour;
    cout << "Enter minutes ";
    cin >> minute;
    timetravel(hour, minute); 
    return 0;
}
void timetravel(int hour, int minute)
{
    minute = minute + 15;

    if(minute >= 60)
    {
        minute = minute - 60;
        hour = hour + 1;
    }

    if(hour >= 24)
    {
        hour = 0;
    }

    if(hour < 10)
    {
        cout << "";   
    }
    cout << hour;      
    cout << ":";

    if(minute < 10)
    {
        cout << "";
    }
    cout << minute;
}
