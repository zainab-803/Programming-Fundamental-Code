#include <iostream>
using namespace std;

main()
{
    int ageOfLilly;
    int washingMachinePrice;
    int pricePerToy;
    int totalToysReceived = 0;
    int totalSavedMoney = 0;
     
    cout << " Enter the age: ";
    cin >> ageOfLilly;
    cout << " Enter the price of washing machine: ";
    cin >> washingMachinePrice;
    cout << " Enter the price of toy: ";
    cin >> pricePerToy;

    for(int birthdayYear = 1; birthdayYear <= ageOfLilly; birthdayYear++)
    {
        if(birthdayYear % 2 == 0)
        {
            int moneyReceived = 10 * (birthdayYear / 2);
            moneyReceived -= 1;
            totalSavedMoney += moneyReceived;
        }
        else
        {
            totalToysReceived++;
        }
    }

    int totalMoney = totalSavedMoney + (totalToysReceived * pricePerToy);

    if(totalMoney >= washingMachinePrice)
    {
        cout << "Yes! " << endl;
        cout << totalMoney - washingMachinePrice << endl;
    }
    else
    {
        cout << "No! " << endl;
        cout << washingMachinePrice - totalMoney << endl;
    }
}