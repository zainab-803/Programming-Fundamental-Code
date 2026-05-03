#include <iostream>
#include <conio.h>
using namespace std;

// Book data
string books[100] = {"Math", "Physics", "Biology", "English", "Chemistry"};
int quantity[100] = {10, 5, 9, 15, 4};
int count = 5;

// ================= FUNCTIONS =================

// header
void showHeader() {
    system("cls");
    cout << "---------------------------------------------------------"<<endl;
    cout << "----------WELCOME TO LIBRARY MANAGEMENT SYSTEM----------"<<endl;
    cout << "---------------------------------------------------------"<<endl;
}

// admin login screen
bool adminLogin() {
    for(int i=0; i<3; i++) {
        system("cls");
        cout << "----------ADMIN LOGIN----------"<<endl;

        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if(username == "admin" && password == "12345") {
            cout << "LOGIN SUCCESSFULLY!" << endl;
            return true;
        }
    }
    return false;
}

// student login screen
bool studentLogin() {
    for(int i=0; i<3; i++) {
        system("cls");
        cout << "----------STUDENT LOGIN----------"<<endl;

        string username, password;
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if(username == "student" && password == "12345") {
            cout << "LOGIN SUCCESSFULLY!" << endl;
            return true;
        }
    }
    return false;
}

// add book
void addBook() {
    cout << "Enter Book name: ";
    cin >> books[count];
    cout << "Enter Quantity: ";
    cin >> quantity[count];
    count++;
    cout << "Added successfully!";
    getch();
}

// view books
void viewBooks() {
    cout << "----Book List----"<<endl;
    for(int i=0; i<count; i++) {
        cout << i+1 << ". " << books[i]
             << " | " << quantity[i] << endl;
    }
    getch();
}

// search book
void searchBook() {
    string search;
    cout << "Enter book name: ";
    cin >> search;

    for(int i=0; i<count; i++) {
        if(books[i] == search) {
            cout << "Found: " << books[i]
                 << " | " << quantity[i] << endl;
        }
    }
    getch();
}

// issue book
void issueBook() {
    string issue;
    cout << "Enter book name: ";
    cin >> issue;

    bool found = false;

    for(int i=0; i<count; i++) {
        if(books[i] == issue && quantity[i] > 0) {
            quantity[i]--;
            cout << "Issued Successfully!";
            found = true;
        }
    }

    if(!found)
        cout << "Not available!";

    getch();
}

// return book
void returnBook() {
    string book;
    cout << "Enter book name: ";
    cin >> book;

    for(int i=0; i<count; i++) {
        if(books[i] == book) {
            quantity[i]++;
            cout << "Returned successfully!";
        }
    }
    getch();
}

// delete book
void deleteBook() {
    string del;
    cout << "Enter book name: ";
    cin >> del;

    for(int i=0; i<count; i++) {
        if(books[i] == del) {
            for(int j=i; j<count-1; j++) {
                books[j] = books[j+1];
                quantity[j] = quantity[j+1];
            }
            count--;
            cout << "Deleted!";
            break;
        }
    }
    getch();
}

// update book
void updateBook() {
    string oldN, newN;
    cout << "Old name: ";
    cin >> oldN;
    cout << "New name: ";
    cin >> newN;

    for(int i=0; i<count; i++) {
        if(books[i] == oldN) {
            books[i] = newN;
            cout << "Updated!";
        }
    }
    getch();
}

// check availability
void checkAvailability() {
    string book;
    cout << "Enter book: ";
    cin >> book;

    for(int i=0; i<count; i++) {
        if(books[i] == book) {
            if(quantity[i] > 0)
                cout << "Available";
            else
                cout << "Not available";
        }
    }
    getch();
}

// count books
void countBooks() {
    cout << "Total books: " << count;
    getch();
}

// ================= ADMIN MENU =================

void adminMenu() {
    while(true) {
        system("cls");
        cout << "----------LIBRARY MENU----------"<<endl;
        cout << "1.Add Book\n2.View\n3.Search\n4.Issue\n5.Return\n6.Delete\n7.Update\n8.Check\n9.Count\n10.Exit\n";

        int choice;
        cin >> choice;

        if(choice == 1) addBook();
        else if(choice == 2) viewBooks();
        else if(choice == 3) searchBook();
        else if(choice == 4) issueBook();
        else if(choice == 5) returnBook();
        else if(choice == 6) deleteBook();
        else if(choice == 7) updateBook();
        else if(choice == 8) checkAvailability();
        else if(choice == 9) countBooks();
        else if(choice == 10) break;
    }
}

// ================= STUDENT MENU =================

void studentMenu() {
    while(true) {
        system("cls");
        cout << "========== STUDENT MENU ==========\n";
        cout << "1.View\n2.Search\n3.Issue\n4.Return\n5.Check\n6.Count\n7.Exit\n";

        int choice;
        cin >> choice;

        if(choice == 1) viewBooks();
        else if(choice == 2) searchBook();
        else if(choice == 3) issueBook();
        else if(choice == 4) returnBook();
        else if(choice == 5) checkAvailability();
        else if(choice == 6) countBooks();
        else if(choice == 7) break;
    }
}

// ================= MAIN =================

int main() {

    while(true) {
        showHeader();

        cout << "1.Admin\n2.Student\n3.Exit\n";
        int userChoice;
        cin >> userChoice;

        if(userChoice == 1) {
            if(adminLogin())
                adminMenu();
        }
        else if(userChoice == 2) {
            if(studentLogin())
                studentMenu();
        }
        else if(userChoice == 3) {
            cout << "Exit";
            break;
        }
        else {
            cout << "Invalid option!";
            getch();
        }
    }

    return 0;
}
