#include<iostream>
using namespace std;

main()

{

cout << " enter paint area: ";
int painted_area;
cin>>painted_area;
cout << "enter width: ";
double width;
cin>>width;
cout << " enter height: ";
double height;
cin>>height;
int walls_painted;
walls_painted = painted_area / ( width * height);
cout << " Walls Painted is: "<<walls_painted;

}