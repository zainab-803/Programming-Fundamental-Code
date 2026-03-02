#include<iostream>
using namespace std;

main()

{

cout << " the weight of the fertilizer bag (in pounds): ";
double weight;
cin>>weight;
cout << " the cost of the bag ($): ";
double cost;
cin>>cost;
cout << " the size of the area the bag can cover (in sq ft): ";
double size;
cin>>size;
double pricePerpound;
pricePerpound = cost / weight;
double costPerSqft;
costPerSqft = cost / size;
cout << " cost of fertilizer per pound is:$ "<<pricePerpound<<endl;
cout << " cost of fertilizer per Sqft is:$ "<<costPerSqft;

}


