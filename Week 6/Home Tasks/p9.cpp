#include<iostream>
using namespace std;

main()
{
    string books[100];
    int totalBooks = 0;
    int choice;

    while(true)
    {
        cout << "\n--- Library System ---" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. Issue Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if(choice == 1)
        {
            if(totalBooks < 100)
            {
                cout << "Enter book name: ";
                cin >> books[totalBooks];

                cout << "Book added successfully: " << books[totalBooks] << endl;
                totalBooks++;
            }
            else
            {
                cout << "Library is full. Cannot add more books." << endl;
            }
        }
        else if(choice == 2)
        {
            if(totalBooks == 0)
            {
                cout << "No books available in library." << endl;
            }
            else
            {
                cout << "\nBooks in Library:" << endl;

                for(int i = 0; i < totalBooks; i++)
                {
                    cout << i + 1 << ". " << books[i] << endl;
                }
            }
        }
        else if(choice == 3)
        {
            string borrowBook;
            bool found = false;

            cout << "Enter book name to borrow: ";
            cin >> borrowBook;

            for(int i = 0; i < totalBooks; i++)
            {
                if(books[i] == borrowBook)
                {
                    cout << "You borrowed the book: " << books[i] << endl;
                    found = true;
                }
            }

            if(found == false)
            {
                cout << "Book not found." << endl;
            }
        }
        else if(choice == 4)
        {
            string issueBook;
            bool found = false;

            cout << "Enter book name to issue: ";
            cin >> issueBook;

            for(int i = 0; i < totalBooks; i++)
            {
                if(books[i] == issueBook)
                {
                    cout << "Book issued successfully: " << books[i] << endl;
                    found = true;
                }
            }

            if(found == false)
            {
                cout << "Book not found." << endl;
            }
        }
        else if(choice == 5)
        {
            cout << "Exiting Library System. Goodbye! " << endl;
        }
        else
        {
            cout << "Invalid Choice! Try again. " << endl;
        }
    }
}
