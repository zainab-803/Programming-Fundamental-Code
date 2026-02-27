#include<iostream>
using namespace std;

main()

{

cout << " enter price of vegetables per kilogram: ";
float vegetablesPrice;
cin>>vegetablesPrice;

cout << " enter price of friut per kilogram: ";
float fruitsPrice;
cin>>fruitsPrice;

cout << " enter price of total vegetables per kilogram: ";
int totalVegetables;
cin>>totalVegetables;

cout << " enter price of total fruits per kilogram: ";
int totalFruits;
cin>>totalFruits;

float totalEarning = (vegetablesPrice * totalVegetables  ) + (fruitsPrice * totalFruits);
float totalRupees = totalEarning/1.94;
cout << " total earning in rupees (Rps): "<<totalRupees;

}