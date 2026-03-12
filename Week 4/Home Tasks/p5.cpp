#include<iostream>
using namespace std;

main()
{
    int holidays, working_days, total_playtime, norm_difference, hour, mint;
    int total_days = 365;
    int norm = 30000;
    cout << " Enter Holidays: ";
    cin >> holidays;
    working_days = total_days - holidays;
    total_playtime = (working_days*63) + (holidays*127);
    
    if(total_playtime <=30000)
    {
        norm_difference = 30000 - total_playtime;
        hour = norm_difference / 60;
        mint = norm_difference % 60;
        cout << " Tom Sleeps well "<<endl;
        cout << hour << " hours and " << mint << " minutes " " minutes less for play ";
    }
    else
    {
        norm_difference = total_playtime - 30000;
        hour = norm_difference / 60;
        mint = norm_difference % 60;
        cout << " Tom will run away "<<endl;
        cout << hour << " hours and " << mint << " minutes " " minutes for play ";
    }

}