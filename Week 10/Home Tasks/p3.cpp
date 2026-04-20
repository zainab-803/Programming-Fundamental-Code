#include<iostream>
using namespace std;

float taxCalculator(char type, float price);

main()
{
    char type;
    float price;
    cout << "Enter Vehicle Type Code (M/E/S/V/T): ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;

    float finalAmount = taxCalculator(type, price);

    cout << "The final price on a vehicle of type " 
    << type << " after adding the tax is $" << finalAmount << endl;
}
float taxCalculator(char type, float price)
{
    float taxAmount, finalAmount, taxRate;

    if(type == 'M' || type == 'm')
    {
        taxRate = 0.06;
    }
    else if(type == 'E' || type == 'e')
    {
        taxRate = 0.08;
    }
    else if(type == 'S' || type == 's')
    {
        taxRate = 0.1;
    }
    else if(type == 'V' || type == 'v')
    {
        taxRate = 0.12;
    }
    else if(type == 'T' || type == 't')
    {
        taxRate = 0.15;
    }
    else
    {
        cout << "Invali type! " << endl;
    }

    taxAmount = price * taxRate;
    finalAmount = price + taxAmount;

}