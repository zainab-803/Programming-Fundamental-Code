#include <iostream>
using namespace std;

 main() 
{
    string correctUsername = "admin";
    string correctPassword = "1234";
    string usernames[3]; // store entered usernames
    string username, password;
    bool loginSuccess = false;

    cout << "--- University Management System ---\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        usernames[i] = username;

        if(username == correctUsername && password == correctPassword) 
        {
            loginSuccess = true;
            cout << "Login Successful\n";
        } 
        else 
        {
            cout << "Incorrect Username or Password\n";
        }
    }
    if(!loginSuccess) 
    {
        cout << "Too many attempts. Access Denied.\n";
    }
    string studentNames[3];
    int studentAges[3];
    int studentCount = 0;

    string courses[3];
    int courseCount = 0;

    while(true) 
    {
        int choice;
        cout << "\n--- Main Menu ---\n";
        cout << "1 Add Student\n";
        cout << "2 View Students\n";
        cout << "3 Add Course\n";
        cout << "4 View Courses\n";
        cout << "5 Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) 
        {
            if(studentCount < 3) 
            {
                cout << "Enter Student Name: ";
                cin >> studentNames[studentCount];
                cout << "Enter Student Age: ";
                cin >> studentAges[studentCount];
                studentCount++;
                cout << "Student Added Successfully\n";
            } 
            else 
            {
                cout << "Student limit reached (3 students max)\n";
            }
        } 
        else if(choice == 2) 
        {
            if(studentCount == 0) 
            {
                cout << "No students added yet.\n";
            } 
            else 
            {
                cout << "\n--- Students List ---\n";
                for(int i = 0; i < studentCount; i++) 
                {
                    cout << "Name: " << studentNames[i] << ", Age: " << studentAges[i] << endl;
                }
            }
        } 
        else if(choice == 3) 
        {
            if(courseCount < 3) 
            {
                cout << "Enter Course Name: ";
                cin >> courses[courseCount];
                courseCount++;
                cout << "Course Added Successfully\n";
            } 
            else 
            {
                cout << "Course limit reached (3 courses max)\n";
            }
        } 
        else if(choice == 4) 
        {
            if(courseCount == 0) 
            {
                cout << "No courses added yet.\n";
            } 
            else 
            {
                cout << "\n--- Courses List ---\n";
                for(int i = 0; i < courseCount; i++)
                {
                    cout << courses[i] << endl;
                }
            }
        } 
        else if(choice == 5) 
        {
            cout << "Exiting... Thank you!\n";
        } 
        else
        {
            cout << "Invalid Choice. Try again.\n";
        }
    }
}
