#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

string fileName = "books.txt";
string books[100];
int quantity[100];
int count = 0;

// file handling

// load data from file
void loadData()
{
    fstream file;
    file.open(fileName, ios::in);
    if (!file)
    {
        cout << "File Not Found!" << endl;
        cout << "Press any key to continue ";
        getch();
        return;
    }
    while (file >> books[count] >> quantity[count])
    {
        count++;
    }
    file.close();
}
// save data in file
void saveData()
{
    fstream file;
    file.open(fileName, ios::out);
    for (int i = 0; i < count; i++)
    {
        file << books[i] << " " << quantity[i] << endl;
    }
    file.close();
}
// header
void displayHeader()
{
    system("cls");

    cout << "---------------------------------------------------------" << endl;
    cout << "--------- WELCOME TO LIBRARY MANAGEMENT SYSTEM ----------" << endl;
    cout << "---------------------------------------------------------" << endl;
}
// admin login

bool adminLogin()
{
    string username, password;
    for (int i = 1; i <= 3; i++)
    {
        system("cls");
        cout << "========== ADMIN LOGIN ==========" << endl;
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "12345")
        {
            cout << "Login Successful!" << endl;
            getch();
            return true;
        }
        else
        {
            cout << "Wrong Username Or Password!" << endl;
            getch();
        }
    }
    cout << "Too Many Attempts!" << endl;
    cout << "Press any key to continue ";
    getch();
    return false;
}

// student login

bool studentLogin()
{
    string username, password;

    for (int i = 1; i <= 3; i++)
    {
        system("cls");
        cout << "========== STUDENT LOGIN ==========" << endl;
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username == "student" && password == "12345")
        {
            cout << "Login Successful!" << endl;
            getch();
            return true;
        }
        else
        {
            cout << "Wrong Username Or Password!" << endl;
            getch();
        }
    }
    cout << "Too Many Attempts!" << endl;
    cout << "Press any key to continue ";
    getch();
    return false;
}

// add books

void addBook()
{
    system("cls");
    string newBook;
    int newQuantity;
    cout << "========== ADD BOOK ==========" << endl;

    // array validation
    if (count >= 100)
    {
        cout << "Library Is Full!" << endl;
        getch();
        return;
    }
    cout << "Enter Book Name: ";
    cin >> newBook;

    // duplicate validation
    for (int i = 0; i < count; i++)
    {
        if (books[i] == newBook)
        {
            cout << "Book Already Exists!" << endl;
            cout << "Press any key to continue ";
            getch();
            return;
        }
    }
    cout << "Enter Quantity: ";
    cin >> newQuantity;

    // quantity validation
    if (newQuantity <= 0)
    {
        cout << "Invalid Quantity!" << endl;
        getch();
        return;
    }
    books[count] = newBook;
    quantity[count] = newQuantity;
    count++;

    // append mode
    fstream file;
    file.open(fileName, ios::app);
    file << newBook << " " << newQuantity << endl;
    file.close();
    cout << "Book Added Successfully!" << endl;
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// view books
void viewBooks()
{
    system("cls");

    cout << "========== BOOK LIST ==========" << endl;
    if (count == 0)
    {
        cout << "No Books Available!" << endl;
        getch();
        return;
    }
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
        << books[i]
        << " | Quantity: "
        << quantity[i] << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// search book
void searchBook()
{
    system("cls");
    string search;
    bool found = false;
    cout << "========== SEARCH BOOK ==========" << endl;

    cout << "Enter Book Name: ";
    cin >> search;

    for (int i = 0; i < count; i++)
    {
        if (books[i] == search)
        {
            cout << "Book Found!" << endl;
            cout << "Book Name: " << books[i] << endl;
            cout << "Quantity: " << quantity[i] << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "Book Not Found!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// issue book
void issueBook()
{
    system("cls");
    string issue;
    bool found = false;
    cout << "========== ISSUE BOOK ==========" << endl;

    cout << "Enter Book Name: ";
    cin >> issue;

    for (int i = 0; i < count; i++)
    {
        if (books[i] == issue)
        {
            found = true;
            if (quantity[i] > 0)
            {
                quantity[i]--;
                saveData();
                cout << "Book Issued Successfully!" << endl;
            }
            else
            {
                cout << "Book Out Of Stock!" << endl;
            }
        }
    }
    if (found == false)
    {
        cout << "Book Not Found!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// return book
void returnBook()
{
    system("cls");
    string book;
    bool found = false;
    cout << "========== RETURN BOOK ==========" << endl;

    cout << "Enter Book Name: ";
    cin >> book;

    for (int i = 0; i < count; i++)
    {
        if (books[i] == book)
        {
            quantity[i]++;
            saveData();
            found = true;
            cout << "Book Returned Successfully!" << endl;
        }
    }
    if (found == false)
    {
        cout << "Book Not Found!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// delete book
void deleteBook()
{
    system("cls");
    string delBook;
    bool found = false;
    cout << "========== DELETE BOOK ==========" << endl;

    cout << "Enter Book Name: ";
    cin >> delBook;

    for (int i = 0; i < count; i++)
    {
        if (books[i] == delBook)
        {
            found = true;
            for (int j = i; j < count - 1; j++)
            {
                books[j] = books[j + 1];
                quantity[j] = quantity[j + 1];
            }
            count--;
            saveData();
            cout << "Book Deleted Successfully!" << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "Book Not Found!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// update book
void updateBook()
{
    system("cls");
    string oldBook, newBook;
    int newQuantity;
    bool found = false;
    cout << "========== UPDATE BOOK ==========" << endl;

    cout << "Enter Old Book Name: ";
    cin >> oldBook;

    for (int i = 0; i < count; i++)
    {
        if (books[i] == oldBook)
        {
            found = true;
            cout << "Enter New Book Name: ";
            cin >> newBook;

            cout << "Enter New Quantity: ";
            cin >> newQuantity;

            if (newQuantity <= 0)
            {
                cout << "Invalid Quantity!" << endl;
                getch();
                return;
            }
            books[i] = newBook;
            quantity[i] = newQuantity;
            saveData();
            cout << "Book Updated Successfully!" << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "Book Not Found!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// check availability
void checkAvailability()
{
    system("cls");
    string book;
    bool found = false;
    cout << "========== CHECK AVAILABILITY ==========" << endl;

    cout << "Enter Book Name: ";
    cin >> book;

    for (int i = 0; i < count; i++)
    {
        if (books[i] == book)
        {
            found = true;

            if (quantity[i] > 0)
            {
                cout << "Book Available!" << endl;
            }
            else
            {
                cout << "Book Not Available!" << endl;
            }
        }
    }
    if (found == false)
    {
        cout << "Book Not Found!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}

// count books

void countBooks()
{
    system("cls");
    cout << "========== TOTAL BOOKS ==========" << endl;
    cout << "Total Books: " << count << endl;
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// first book
void firstBook()
{
    system("cls");

    cout << "========== FIRST BOOK ==========" << endl;

    if (count > 0)
    {
        cout << "First Book: " << books[0] << endl;
    }
    else
    {
        cout << "No Books Available!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// last book
void lastBook()
{
    system("cls");
    cout << "========== LAST BOOK ==========" << endl;
    if (count > 0)
    {
        cout << "Last Book: " << books[count - 1] << endl;
    }
    else
    {
        cout << "No Books Available!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// available books
void availableBooks()
{
    system("cls");
    bool found = false;
    cout << "========== AVAILABLE BOOKS ==========" << endl;

    for (int i = 0; i < count; i++)
    {
        if (quantity[i] > 0)
        {
            cout << books[i]
            << " | Quantity: "
            << quantity[i] << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "No Available Books!" << endl;
    }
    cout << endl;
    cout << "Press any key to continue ";
    getch();
}
// admin menu
void adminMenu()
{
    int choice;
    while (true)
    {
        system("cls");
        cout << "========== ADMIN MENU ==========" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. Delete Book" << endl;
        cout << "7. Update Book" << endl;
        cout << "8. Check Availability" << endl;
        cout << "9. Count Books" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        // validation
        if (choice < 1 || choice > 10)
        {
            cout << "Invalid Choice!" << endl;
            cout << "Press any key to continue ";
            getch();
        }
        else if (choice == 1)
        {
            addBook();
        }
        else if (choice == 2)
        {
            viewBooks();
        }
        else if (choice == 3)
        {
            searchBook();
        }
        else if (choice == 4)
        {
            issueBook();
        }
        else if (choice == 5)
        {
            returnBook();
        }
        else if (choice == 6)
        {
            deleteBook();
        }
        else if (choice == 7)
        {
            updateBook();
        }
        else if (choice == 8)
        {
            checkAvailability();
        }
        else if (choice == 9)
        {
            countBooks();
        }
        else if (choice == 10)
        {
            break;
        }
    }
}
//student menu
void studentMenu()
{
    int choice;

    while (true)
    {
        system("cls");
        cout << "========== STUDENT MENU ==========" << endl;
        cout << "1. View Books" << endl;
        cout << "2. Search Book" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Check Availability" << endl;
        cout << "6. Count Books" << endl;
        cout << "7. First Book" << endl;
        cout << "8. Last Book" << endl;
        cout << "9. Available Books" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        // validation
        if (choice < 1 || choice > 10)
        {
            cout << "Invalid Choice!" << endl;
            cout << "Press any key to continue ";
            getch();
        }
        else if (choice == 1)
        {
            viewBooks();
        }
        else if (choice == 2)
        {
            searchBook();
        }
        else if (choice == 3)
        {
            issueBook();
        }
        else if (choice == 4)
        {
            returnBook();
        }
        else if (choice == 5)
        {
            checkAvailability();
        }
        else if (choice == 6)
        {
            countBooks();
        }
        else if (choice == 7)
        {
            firstBook();
        }
        else if (choice == 8)
        {
            lastBook();
        }
        else if (choice == 9)
        {
            availableBooks();
        }
        else if (choice == 10)
        {
            break;
        }
    }
}
// main
main()
{
    loadData();
    int choice;
    while (true)
    {
        system("cls");
        displayHeader();
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        system("cls");
        // validation
        if (choice < 1 || choice > 3)
        {
            cout << "Invalid Choice!" << endl;
            cout << "Press any key to continue ";
            getch();
        }
        else if (choice == 1)
        {
            if (adminLogin())
            {
                adminMenu();
            }
        }
        else if (choice == 2)
        {
            if (studentLogin())
            {
                studentMenu();
            }
        }
        
        else if (choice == 3)
        {
            cout << "Exit " << endl;
            break;
        }
    }
    return 0;
}