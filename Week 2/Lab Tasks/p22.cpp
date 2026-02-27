#include<iostream>
using namespace std;

main()

{

cout << " enter age: ";
int age;
cin>>age;
cout << " enter moves: ";
int moves;
cin>>moves;
double average_years;
average_years = age /( moves + 1);
cout << " Average years is: "<<average_years;

}