#include<iostream>
using namespace std;

main()
{
   int salary = 10000;
   int laptop_price = 50000;
   int advance;
   int month = 6;
   int month_required;
    advance = salary * 0.5 * month;
    if(advance >= laptop_price)
    {
        cout << " ali can buy laptop ";
    }
    else
    {
        month_required = laptop_price / (salary * 0.5);
        cout << " month required to buy laptop: "<<month_required;

    }
}