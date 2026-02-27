#include<iostream>
using namespace std;

main()

{

cout << " enter name of the movie: ";
string movie;
cin>>movie;

cout << " enter price of an adult ticket:$ ";
int adult_ticket;
cin>>adult_ticket;

cout << " enter price of child ticket:$ ";
int child_ticket;
cin>>child_ticket;

cout << " enter number of adult tickets sold: ";
int adult_ticketsold;
cin>>adult_ticketsold;

cout << " enter number of children tickets sold: ";
int child_ticketsold;
cin>>child_ticketsold;
cout << " enter percentage of the total money to donate to charity: ";
double charityPercent;
cin>>charityPercent;

float totalMoney = (adult_ticket * adult_ticketsold) + (child_ticket * child_ticketsold);
float charityMoney = (totalMoney * charityPercent) / 100;
float remainingMoney = totalMoney - charityMoney;

cout << " total amount generated from tickets sales:$ "<<totalMoney<<endl;
cout << " donation to charity(15):$ "<<charityMoney<<endl;
cout << " remaining amount after donation:$ "<<remainingMoney;

}
 