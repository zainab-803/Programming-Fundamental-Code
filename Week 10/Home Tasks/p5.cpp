#include<iostream>
using namespace std;

float calculateSalary(float base, int score, int experience);

main()
{
    float base;
    int score, experience;
    cout << " Enter base: ";
    cin >> base;
    cout << "Enter score: ";
    cin >> score;
    cout << "Enter experience: ";
    cin >> experience;
    cout << calculateSalary(base, score, experience);
}
float calculateSalary(float base, int score, int experience)
{
    double bonusPercentage;
    double finalSalary, bonus;
    if(score >= 90)
    {
        bonusPercentage = 0.2;
    }
    else if(score >=75 && score <= 89)
    {
        bonusPercentage = 0.1;
    }
    else
    {
        bonusPercentage = 0.05;
    }
    if(experience >= 5 )
    {
        bonusPercentage += 0.05; 
    }

    bonus = base * bonusPercentage;
    finalSalary = base + bonus;

    return finalSalary;
}