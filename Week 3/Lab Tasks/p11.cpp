#include<iostream>
using namespace std;

main()

{

cout << " enter the student's name:";
string name;
cin>>name;
cout << " enter matric marks (out of 1100): ";
float matric;
cin>>matric;
cout << " enter inter marks (out of 550): ";
float inter;
cin>>inter;
cout << " enter Ecat marks (out of 400): ";
float ecat;
cin>>ecat;
float aggregate;

matric = (matric / 1100) * 100;
inter = (inter / 550) * 100;
ecat = (ecat / 400) * 100;
ecat = (matric * 0.10) + (inter * 0.40) + (ecat * 0.50);
cout << " aggregate score is "<<ecat<<"%";




}