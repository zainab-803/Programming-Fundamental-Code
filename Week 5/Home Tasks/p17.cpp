#include<iostream>
using namespace std;

main()
{
    while (true)
    {
        int choice, num1, num2, result;
        cout << "\n --- Simple Calculator --- "<<endl;
        cout << " 1. Addition"<<endl;
        cout << " 2. Subtraction"<<endl;
        cout << " 3. Multiplication"<<endl;
        cout << " 4. Division"<<endl;
        cout << " 5. Clear Screen "<<endl;
        cout << " 6. Exit "<<endl;
        cout << " Enter your choice (1-6) ";
        cin >> choice;
        cout << " Enter First Number:";
        cin >> num1;
        cout << " Enter Second Number:";
        cin >> num2;

        if(choice == 1)
        {
            result = num1 + num2;
            cout << "Result: " << result <<endl;
        }
        else if (choice == 2)
        {
            result = num1 - num2;
            cout << " Result: " << result << endl;
        }
        else if (choice == 3)
        {
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 4)
        {
            if(num2 == 0)
            cout << " Error: It is Undefined! " << endl;
            result = num1 / num2;
            cout << " Result: " << result << endl;
        }
        else if (choice == 5)
        {
            cout << " Screen Cleared. "<<endl;
        }
        else if (choice == 6)
        {
            cout << " Exiting Calculator. Googbye! "<<endl;
        }
        else 
        {
            cout << " Invalid Choice! "<< endl;
        }
    }
}