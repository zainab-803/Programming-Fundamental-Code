#include<iostream>
using namespace std;

main()
{
    string country_name;
    double ticket_price,discounted_price,final_price;
    cout << " Enter the Country name: ";
    cin >> country_name;
    cout << " Eter the Ticket price in dollars: ";
    cin >> ticket_price;
    if(country_name == "ireland")
    {
        discounted_price = ticket_price*0.10;
    }
    else
    {
        discounted_price = ticket_price*0.05;
    }
    final_price = ticket_price - discounted_price;
    cout << " Ticket Price:$ "<<ticket_price<<endl;
    cout << " Discunted Price:$ "<<discounted_price<<endl;
    cout << " The final price of tickets after discount is:$ "<<final_price;
    
    
}