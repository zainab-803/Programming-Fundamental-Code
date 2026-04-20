#include<iostream>
using namespace std;

void calculatePyramidVolume(double length, double width, double height, string unit);

main()
{
    double length, width, height;
    string unit;

    cout << "Enter length (in meters): ";
    cin >> length;

    cout << "Enter width (in meters): ";
    cin >> width;

    cout << "Enter height (in meters): ";
    cin >> height;

    cout << "Enter output unit (milimeters, centimeters, meters, kkilometers): ";
    cin >> unit;

    calculatePyramidVolume(length, width, height, unit);
}
void calculatePyramidVolume(double length, double width, double height, string unit)
{
    double volume_m = (length * width * height) / 3.0;
    double convertedVolume;

    if (unit == "milimeters")
    {
        convertedVolume = volume_m * 1000000000; 
        cout << "Volume = " << convertedVolume << " cubic millimeters";
    }
    else if (unit == "centimeters")
    {
        convertedVolume = volume_m * 1000000; 
        cout << "Volume = " << convertedVolume << " cubic centimeters";
    }
    else if (unit == "meters")
    {
        cout << "Volume = " << volume_m << " cubic meters";
    }
    else if (unit == "kilometers")
    {
        convertedVolume = volume_m / 1000000000; 
        cout << "Volume = " << convertedVolume << " cubic kilometers";
    }
    else
    {
        cout << "Invalid unit!";
    }
}
