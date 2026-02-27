#include<iostream>
using namespace std;

main()

{

cout << " enter the sides of polygon: ";
int polygonSides;
cin>>polygonSides;
double interiorAngles;
interiorAngles = (polygonSides - 2) * 180;
cout << " sum of interior angle is: "<<interiorAngles;

}