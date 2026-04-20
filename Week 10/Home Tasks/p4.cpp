#include<iostream>
using namespace std;

string projectTimeCalculation(int hours, int days, int workers);

main()
{
    int hours, days, workers;
    cout << "Enter needed hours: ";
    cin >> hours;
    cout << "Enter number of days of firm: ";
    cin >> days;
    cout << "Enter number of workers: ";
    cin >> workers;
    cout << projectTimeCalculation(hours, days, workers);
}
string projectTimeCalculation(int hours, int days, int workers)
{
    double workingDays = days * 0.9;
    double totalHours = workingDays * workers * 10;
    int finalHours = totalHours;
    if(finalHours >= hours)
    {
        int left = finalHours - hours;
        cout << "Yes! " << left << " hours left.";
    }
    else
    {
        int needed = hours - finalHours;
        cout << "Not enough time!" << needed << " hours needed.";
    }
}