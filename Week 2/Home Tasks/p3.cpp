#include<iostream>
using namespace std;

main()
{

cout << " enter initial velocity: ";
double initial_velocity;
cin>>initial_velocity;
cout << " enter acceleration: ";
double acceleration;
cin>>acceleration;
cout << " enter time: ";
double time;
cin>>time;
double final_velocity;
final_velocity = initial_velocity + acceleration *time;
cout << " final velocity is: "<<final_velocity;

}