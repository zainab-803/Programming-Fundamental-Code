#include<iostream>
using namespace std;

main()
{
    string shape;
    cout << " Enter the shape (square, rectangle, circle, triangle): ";
    cin >> shape;
    if(shape == "square")
    {
        double side, area;
        cout << " Enter length of its side: ";
        cin >> side;
        area = side * side;
        cout << area;
    }
    else if(shape == "rectangle")
    {
        double length,width,area;
        cout << " Enter length of its side: ";
        cin >> length;
        cout << " Enter width of its side: ";
        cin >> width;
        area = length * width;
        cout << area;
    }
    else if(shape == "circle")
    {
        double radius,area;
        float pi = 3.141;
        cout << " Enter the radius of the circle: ";
        cin >> radius;
        area = pi*radius*radius;
        cout << area;
    }
    else if(shape == "triangle")
    {
        double base,height,area;
        cout << " Enter the base of length: ";
        cin >> base;
        cout << " Enetr the height of its length: ";
        cin >> height;
        area = 1.0/2.0 * base * height;
        cout << area;
    }

}