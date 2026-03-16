#include <iostream>
using namespace std;

main()
{
    float n;
    cout << "Enter the number of integers: ";
    cin >> n;

    float count1 = 0; 
    float count2 = 0; 
    float count3 = 0; 
    float count4 = 0; 
    float count5 = 0; 

    int number;

    cout << "Enter " << n << " numbers (1-1000):" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> number;

        if(number < 200)
            count1 = count1 + 1;
        else if(number <= 399)
            count2 = count2 + 1;
        else if(number <= 599)
            count3 = count3 + 1;
        else if(number <= 799)
            count4 = count4 + 1;
        else
            count5 = count5 + 1;
    }

    double p1 = (double)count1 / n * 100;
    double p2 = (double)count2 / n * 100;
    double p3 = (double)count3 / n * 100;
    double p4 = (double)count4 / n * 100;
    double p5 = (double)count5 / n * 100;

    cout << "Percentages in ranges:\n";
    cout << "<200: " << p1 << "%\n";
    cout << "200-399: " << p2 << "%\n";
    cout << "400-599: " << p3 << "%\n";
    cout << "600-799: " << p4 << "%\n";
    cout << ">=800: " << p5 << "%\n";

}