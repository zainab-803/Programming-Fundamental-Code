#include<iostream>
using namespace std;

main()

{

cout << " enter length of the video in minutes: ";
double minutes;
cin>>minutes;
cout << " enter length of the video in fps: ";
double fps;
cin>>fps;
double total_frames;
total_frames = minutes * 60 * fps;
cout << " total number of frames: "<<total_frames;

}