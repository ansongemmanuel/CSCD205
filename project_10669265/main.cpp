/**
A school management system used to keep student record and process staff.
The application allows users to choose different options based on a displayed menu.
**/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Student.h"
#include "Admin.h"
#include "Lecturer.h"

using namespace std;

int main()
{

    // Variable declaration

    int my_option;
    string my_student_id;
    int student_n;
    int mystaff_num;
    string mystaff_id;
    int course_num;

    Student ansong;

    Admin samuel;

    Lecturer nana;



    while(1)
    {

        // Menu to be displayed to the user
        cout << "          Ansong school management system    " << endl << endl;
        cout << "Enter an option: "<< endl;
        cout << ">[1] Student" << endl;
        cout << ">[2] Administrator" << endl;
        cout << ">[3] Staff" << endl;
        cout << ">[4] Exit"<<endl;
        cout << ">: ";
        cin >> my_option;

        // Switch statement to display a menu based on the user's input
        // For example, supposing the user selects option 1, add a student, the program displays all the menu under the add a student option

        switch(my_option)
        {
        case 1:
            {
        cout << ">[1] Add Student" << endl;
        cout << ">[2] Edit Student" << endl;
        cout << ">[3] Delete Student" << endl;
        cout << ">[4] Print student record" << endl;
        cout << ">[5]  Exit" << endl;
        cout << ">: ";
        cin >> my_option;



        switch(my_option)
        {
        case 1:
            {
                cout << "Enter the number of students: ";
            cin >> student_n;

            ansong.addStudent(student_n);
            }
            break;


        case 2:
            {
                cout << "Enter student id: ";
                cin >> my_student_id;

                ansong.editStudent(my_student_id);
            }
            break;
        case 3:
            {

                cout << "Enter the id: ";
                cin >> my_student_id;

                ansong.deleteStudent(my_student_id);
            }
            break;
        case 4:
            {
                ansong.printRecord();
                cout << "Done" << endl;
            }
            break;
        default:
            {
                break;
            }

        }

        case 2:
            {
        cout << ">[1] Add Staff" << endl;
        cout << ">[2] Edit Staff" << endl;
        cout << ">[3] Delete Staff" << endl;
        cout << "[4]  Exit" << endl;
        cout << ">: ";
        cin >> my_option;

        switch(my_option)
        {
        case 1:
            {
                cout << "Enter the number of Staff: ";
                cin >> mystaff_num;

                 samuel.add_staff(mystaff_num);

            }
            break;
        case 2:
            {
                cout << "Enter ID: ";
                cin >> mystaff_id;

                samuel.edit_staff(mystaff_id);
            }
            break;
        case 3:
            {
                cout << "Enter ID: ";
                cin >> mystaff_id;

                samuel.delete_staff(mystaff_id);


            }
            break;
        default:
            {
                break;
            }

        }
            }

        case 3:
            {
        cout << "Enter an option"<< endl;
        cout << ">[1] Assign course" << endl;
        cout << ">[2] Enter Marks" << endl;
        cout << "[4]  Exit" << endl;
        cout << ">: ";
        cin >> my_option;

        switch(my_option)
        {
        case 1:
            {
                cout << "Enter Student ID: ";
                cin >> my_student_id;

               nana.assign_course(my_student_id);
            }
            break;
        case 2:
            {
                cout << "Enter the number of courses: ";
                cin >> course_num;

                nana.student_mark(course_num);
            }
            break;
        default:
            {
                break;
            }
            break;
        }

            }

            }
        }

    }

    return 0;
}
