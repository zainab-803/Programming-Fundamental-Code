#include<iostream>
using namespace std;

main()

{

cout << " enter the current world population: ";
int worldPopulation;
cin>>worldPopulation;
cout << " enter the monthly birth rate: ";
int monthlyBirthrate;
cin>>monthlyBirthrate;
int months = 30 * 12;
int numberofPeople = worldPopulation + (monthlyBirthrate * months);
cout << " Population in three decades will be "<<numberofPeople;


}