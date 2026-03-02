#include<iostream>
using namespace std;

main()

{

cout << " enter imposters: ";
double imposters;
cin>>imposters;
cout << " enter players: ";
double players;
cin>>players;
double chance;
chance = 100 * (imposters / players);
cout << " chance of being an imposter is: "<<chance;

}

