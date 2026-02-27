#include<iostream>
using namespace std;

main()

{

cout << " enter the size in megabytes: ";

float megabytes;
cin>>megabytes;
float bites;
bites = megabytes * 1024 * 1024 * 8;
cout << " MB is equal to "<<bites<<" bites ";

}
