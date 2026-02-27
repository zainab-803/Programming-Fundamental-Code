#include<iostream>
using namespace std;

main()

{

cout << " enter minutes: ";
int minutes;
cin>>minutes;
cout << " enter frames per second: ";
int framesper_second;
cin>>framesper_second;
int numberof_frames;
numberof_frames = minutes * 60 * framesper_second;
cout << " total number of frames is: "<<numberof_frames;

}