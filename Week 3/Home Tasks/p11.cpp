#include<iostream>
using namespace std;

main()

{

cout << " enter Person's age: ";
int person_age;
cin>>person_age;
cout << " enter moves: ";
int moves;
cin>>moves;
double average_years;
average_years = person_age /( moves + 1);
cout << " Average years is: "<<average_years;

}