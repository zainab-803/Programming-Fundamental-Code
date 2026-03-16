#include<iostream>
using namespace std;

main()
{
    while (true)
    {
        int choice;
        string book_name;
        cout << "\n--- Library System --- "<<endl;
        cout << " 1. Add Books "<<endl;
        cout << " 2. View Books "<<endl;
        cout << " 3. Borrow Books "<<endl;
        cout << " 4. Issue Books "<<endl;
        cout << "5. Exit "<<endl;
        cout << " Enter yor choice(1-5) ";
        cin >> choice;
        
        if(choice == 1)
        {
            cout << " Enter book name: ";
            cin >> book_name;
            cout << "You added a book: "<<book_name<<endl;
        }
        else if (choice == 2)
        {
            cout << " Enter book name: ";
            cin >> book_name;
            cout << " View Book: " << book_name;
        }
        else if (choice == 3)
        {
            cout << " Enter book name: ";
            cin >> book_name;
            cout << " You Borrowed a Book: " << book_name;
        }
        else if (choice == 4)
        {
            cout << " Enter book name: ";
            cin >> book_name;
            cout << " Issue a book: " << book_name;
        }
        else if (choice == 5)
        {
            cout << " Exiting Library System. GoodBye! ";
        }
        else
        {
            cout << " Invalid Choice! ";
        }

    }
}