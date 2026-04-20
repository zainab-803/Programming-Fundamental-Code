#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    // Book size and data structure
    string books[100] = {"Math", "Physics", "Biology", "English", "Chemistry"};
    int quantity[100] = {10, 5, 9, 15, 4,};
    int count = 5;

    // CRUD, Create, Read, Update, Delete
    while(true)
    {
        //main header of library manegement system
        system("cls");
        cout << "---------------------------------------------------------"<<endl;
        cout << "----------WELCOME TO LIBRARAY MANEGEMENT SYSTEM----------"<<endl;
        cout << "---------------------------------------------------------"<<endl;

        cout << "Please Select your choice! "<< endl;
        cout << "1.Admin "<<endl;
        cout << "2.Student "<<endl;
        cout << "3.Exit "<<endl;
        cout << "Enter your choice: ";
        int userChoice;
        cin >> userChoice;
        
        cout << "You choose "<< userChoice << endl;
        if(userChoice == 1)
        {
            //write here the admin code
            for(int i=0; i<3; i++)
            {
                system("cls");
                cout << "----------ADMIN LOGIN----------"<<endl;
                string username;
                cout << "Enter username: ";
                cin >> username;
                string password;
                cout << "Enter password: ";
                cin >> password;
                if(username == "admin" && password == "12345")
                {
                    cout << "LOGIN SUCCESSFULLY! "<<endl;


                    while(true)
                    {
                        system("cls");
                        //input data
                        cout << "----------LIBRARY MENU----------"<<endl;
                        cout << "1.Add Books "<<endl;
                        cout << "2.View Books "<<endl;
                        cout << "3.Search Book "<<endl;
                        cout << "4.Issue Book "<<endl;
                        cout << "5.Return Book "<<endl;
                        cout << "6.Delete Book "<<endl;
                        cout << "7.Upadte Book Name "<<endl;
                        cout << "8.Check Availability "<<endl; 
                        cout << "9.Count Books "<<endl;
                        cout << "10.Exit "<<endl;

                        int adminchoice;
                        cout << "Enter your choice: ";
                        cin >> adminchoice;

                        //add book
                        if(adminchoice == 1)
                        {
                            cout << "Enter Book name: ";
                            cin >> books[count];
                            cout << "Enter Quantity: ";
                            cin >> quantity[count];
                            count++;
                            cout << "Added book name and quantity successfully "<<endl;
                            cout << "Press any key to continue..";
                            getch();
                        }

                        //view books
                        else if(adminchoice == 2)
                        {
                            cout << "----Book List----"<<endl;
                            for(int i=0; i<count; i++)
                            {
                                cout << i+1 << ". Book: " << books[i] 
                                << " | Quantity: " << quantity[i] << endl;
                            }
                            cout << "Press any key to continue..";
                            getch();
                        }

                        //search books
                        else if(adminchoice == 3)
                        {
                            string searchBooks;
                            cout << "Enter Search book name: ";
                            cin >> searchBooks;
                            bool found = false;
                            for(int i=0;i<count;i++)
                            {
                                if(books[i]==searchBooks)
                                {
                                    cout << "Found"<<endl;
                                    cout << "Book: " << books[i]
                                    << " | Quantity: " << quantity[i] <<endl;
                                }
                            }
                            cout << "Press any key to continue..";
                            getch();
                        }

                        //issue book
                        else if(adminchoice == 4)
                        {
                            string issueBook;
                            cout << "Enter issue book name: ";
                            cin >> issueBook;
                            bool found = false;
                            for(int i=0;i<count;i++)
                            {
                                if(books[i] == issueBook && quantity[i]>0)
                                {
                                    quantity[i]--;
                                    cout << "Book Issued Successfully! "<<endl;
                                    cout << "Book: " << books[i] 
                                    << " | Remaining Quantity: " << quantity[i] << endl;
                                    found = true;
                                }
                            }
                            if(!found)
                            {
                                cout << "Book not available or not found!"<<endl;
                            }
                            cout << "Press any key to continue..";
                            getch();
                        }
                        
                        //return book
                        else if(adminchoice == 5)
                        {
                            string returnBook;
                            cout << "Enter Return book name: ";
                            cin >> returnBook;
                            bool found = false;
                            for(int i=0; i<count; i++)
                            {
                                quantity[i]++;
                                if(books[i] == returnBook)
                                {
                                    quantity[i]++;
                                    cout << "Book Return Successflly! " << endl;
                                    cout << "Book: " << books[i]
                                    << " | Updated Quantity: " << quantity[i] << endl;
                                    found = true;
                                }  
                            }
                            cout << "Press any key to continue..";
                            getch();
                        }

                        //delete book
                        else if(adminchoice == 6)
                        {
                            string deleteBook;
                            cout << "Enter Book name you want to delete: ";
                            cin >> deleteBook;
                            bool found = false;
                            for(int i=0; i<count; i++)
                            {
                                if(books[i] == deleteBook)
                                {
                                    for(int j = i; j < count-1; j++)
                                    {
                                        books[j] = books[j+1];
                                        quantity[j] = quantity[j+1];
                                    }
                                    count--;
                                    found = true;
                                    cout << "Book Deleted Successfully! "<< endl;
                                    break;
                                    

                                }
                            }
                            if(!found)
                            {
                                cout << "Book not found! " << endl;
                            }
                            cout << "Press any key to continue..";
                            getch();
                        }

                        //update book
                        else if(adminchoice == 7)
                        {
                            string oldName, newName;
                            bool found = false;
                            cout << "Enter old book name: ";
                            cin >> oldName;
                            cout << "Enter new book name: ";
                            cin >> newName;
                            for(int i = 0; i < count; i++)
                            {
                                if(books[i] == oldName)
                                {
                                    books[i] = newName;
                                    found = true;
                                    cout << "Book name updated successfully! " << endl;
                                    break;
                                }
                            }
                            if(!found)
                            {
                                cout << "Not found! " << endl;
                            }
                            cout << "Press any key to continue..";
                            getch(); 
                        }

                        //check availability
                        else if(adminchoice == 8)
                        {
                            string checkBook;
                            bool found = false;
                            cout << "Enter book name: ";
                            cin >> checkBook;
                            for(int i = 0; i < count; i++)
                            {
                                if(books[i] == checkBook)
                                {
                                    found = true;
                                    if(quantity[i] > 0)
                                    {
                                        cout << "Book is Available (" << quantity[i] << " copies) " << endl;
                                    }
                                    else
                                    {
                                        cout << "Book is Not Available " << endl;
                                    } 
                                    }
                                }
                            if(!found)
                            {
                                cout << "Book not found in library! "<< endl;
                            }
                            cout << "Press any key to continue..";
                            getch();
                        }

                        //total books count
                        else if(adminchoice == 9)
                        {
                            cout << "Total number of books: " << count << endl;
                            cout << "Press any key to continue..";
                            getch();
                        }

                        //Exit
                        else if(adminchoice == 10)
                        {
                            cout << "Thanks for visiting "<<endl;
                            cout << "Press any key to continue..";
                            getch();
                        }
                        else
                        {
                            cout << "Invalid option! "<< endl;
                            cout << "Press any key to continue..";
                            getch();
                        }
                    }
                }
            }
        }
        if(userChoice == 2)
        {
            //write here the student code
            for(int i=0; i<3; i++)
            {
                system("cls");
                cout << "----------Student LOGIN----------"<<endl;
                cout << "Enter Username: ";
                string username;
                cin >> username;
                cout << "Enter Password: ";
                string password;
                cin >> password;

                if(username == "student" && password == "12345")
                {
                    cout << "LOGIN SUCCESSFLLY! " << endl;
                }

                while(true)
                {
                    system("cls");
                    //input data
                    cout << "========== STUDENT MENU ========== " << endl;
                    cout << "1. View Books " << endl;
                    cout << "2. Search Book " << endl;
                    cout << "3. Issue Book " << endl;
                    cout << "4. Return Book " << endl;
                    cout << "5. Check Availability "<< endl;
                    cout << "6. Count Books " << endl;
                    cout << "7. First Book " <<endl;
                    cout << "8. Last Book " << endl;
                    cout << "9. Available Books List " << endl;
                    cout << "10. Exit " << endl;

                    int studentChoice;
                    cout << "Enter your choice: ";
                    cin >> studentChoice;
                    
                    //view books
                    if(studentChoice == 1)
                    {
                        cout << "----Book List----"<<endl;
                        for(int i=0; i<count; i++)
                        {
                            cout << i+1 << ". Book: " << books[i] 
                            << " | Quantity: " << quantity[i] << endl;
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }

                    //search book
                    else if(studentChoice == 2)
                    {
                        string searchBooks;
                        cout << "Enter Search book name: ";
                        cin >> searchBooks;
                        bool found = false;
                        for(int i=0;i<count;i++)
                        {
                            if(books[i]==searchBooks)
                            {
                                cout << "Found"<<endl;
                                cout << "Book: " << books[i]
                                << " | Quantity: " << quantity[i] <<endl;
                            }
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }
                    
                    //issue book
                    else if(studentChoice == 3)
                    {
                        string issueBook;
                        cout << "Enter issue book name: ";
                        cin >> issueBook;
                        bool found = false;
                        for(int i=0;i<count;i++)
                        {
                            if(books[i] == issueBook && quantity[i]>0)
                            {
                                quantity[i]--;
                                cout << "Book Issued Successfully! "<<endl;
                                cout << "Book: " << books[i] 
                                << " | Remaining Quantity: " << quantity[i] << endl;
                                found = true;
                            }
                        }
                        if(!found)
                        {
                            cout << "Book not available or not found!"<<endl;
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }

                    //return book
                    else if(studentChoice == 4)
                    {
                        string returnBook;
                        cout << "Enter Return book name: ";
                        cin >> returnBook;
                        bool found = false;
                        for(int i=0; i<count; i++)
                        {
                            quantity[i]++;
                            if(books[i] == returnBook)
                            {
                                quantity[i]++;
                                cout << "Book Return Successflly! " << endl;
                                cout << "Book: " << books[i]
                                << " | Updated Quantity: " << quantity[i] << endl;
                                found = true;
                            }
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }

                    //check Availability
                    else if(studentChoice == 5)
                    {
                        string checkBook;
                        bool found = false;
                        cout << "Enter book name: ";
                        cin >> checkBook;
                        for(int i = 0; i < count; i++)
                        {
                            if(books[i] == checkBook)
                            {
                                found = true;
                                if(quantity[i] > 0)
                                {
                                    cout << "Book is Available (" << quantity[i] << " copies) " << endl;
                                }
                                else
                                {
                                    cout << "Book is Not Available " << endl;
                                } 
                            }
                        }
                        if(!found)
                        {
                            cout << "Book not found in library! "<< endl;
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }

                    //count books
                    else if(studentChoice == 6)
                    {
                        cout << "Total number of books: " << count << endl;
                        cout << "Press any key to continue..";
                        getch();
                    }

                    //first book
                    else if(studentChoice == 7)
                    {
                        cout << "First Book: " << books[i] << endl;
                        cout << "Press any key to continue..";
                        getch();
                    }

                    //last book
                    else if(studentChoice == 8)
                    {
                        cout << "Last Book: " << books[count - 1] << endl;
                        cout << "Press any key to continue..";
                        getch();
                    }

                    //Available book list
                    else if(studentChoice == 9)
                    {
                        cout << "--- Available Books ---" << endl;
                        for(int i = 0; i < count; i++)
                        {
                            if(quantity[i] > 0)
                            {
                                cout << books[i] << " = " << quantity[i] << endl;
                            }
                        }
                        cout << "Press any key to continue..";
                        getch();

                    }

                    //Exit
                    else if(studentChoice == 10)
                    {
                        cout << "Thanks for visiting students menu! " << endl;
                    }
                }
            }
        }
        if(userChoice == 3)
        {
            cout << "Exit "<< endl;
        }
        else
        {
            cout << "Invali Option! " << endl;
        }
        cout << "Press any key to continue..";
        getch();
    }
}