#include<iostream>
using namespace std;

float calculateBalance(float balance, int years);

main()
{
    float balance;
    int years;
    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter year: ";
    cin >> years;
    float updatedBalance = calculateBalance(balance, years);
    cout << "Updated Balance: " << updatedBalance << endl; 
}
float calculateBalance(float balance, int years)
{
    float rate;
    if(balance < 10000)
    {
        rate = 0.05;
    }    
    else if(balance <= 50000)
    {
        rate = 0.07;
    }
    else
    {
        rate = 0.10;
    }
    if(years >= 3)
    {
        rate += 0.02;
    }    
    float interest = balance * rate;
    float updatedBalance = balance + interest;
    return updatedBalance;
}
