#include <iostream>
using namespace std;

main()
{
    int inheritedMoney, targetYear;
    cout << " Enter Money: ";
    cin >> inheritedMoney;
    cout << " Enter Year: ";
    cin >> targetYear;

    int totalExpenses = 0;

    for(int year = 1800; year <= targetYear; year++)
    {
        int ageInYear = 18 + (year - 1800);
        int expense = 12000 + (year % 2 != 0 ? 50 * ageInYear : 0);
        totalExpenses = totalExpenses + expense;
    }

    int moneyLeft = inheritedMoney - totalExpenses;

    if(moneyLeft >= 0)
        cout << "Yes! He wil live a carefree life and will have " << moneyLeft << " dollars left." << endl;
    else
        cout << " He wil need  " << -moneyLeft << " dollars to survive." << endl;

}