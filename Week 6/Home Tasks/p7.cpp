#include<iostream>
using namespace std;

main()
{
    int n;
    string productNames[4];
    double prices[4];
    double quantity[4];

    cout << "Enter Number of products: ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cout << "Enter name of product " << i + 1 << ": ";
        cin >> productNames[i];

        cout << "Enter price of " << productNames[i] << ": ";
        cin >> prices[i];

        cout << "Enter quantity of " << productNames[i] << ": ";
        cin >> quantity[i];

        cout << endl;
    }
    cout << "Product Inventory Report " << endl;
    cout << "------------------------ " << endl;

    for(int i = 0; i < n; i++)
    {
        double total;
        total = prices[i] * quantity[i];
        cout << productNames[i] << ": " 
        << prices[i] << ", " 
        << quantity[i] << " in stock, Total value: " 
        << total << endl;
    } 

}