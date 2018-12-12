#include "Student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;


Student::Student()
{
    //ctor
}

void Student:: addStudent(int num)
{
    num=s_num;

    for (int i=0;i < num; i++)
    {
        cout << " enter your full name: ";
        cin >> s_name[i];
        cout << " your student id: ";
        cin >> s_id[i];
        cout << " your course: ";
        cin >> s_course[i];
        cout << " your level: ";
        cin >> s_level[i];
        cout << "Email: ";
        cin >> s_email[i];
        cout << "Address: ";
        cin >> s_address[i];

    }
    cout << endl;
}

void Student::editStudent(string std_id)
{
    for (int i=0;i<s_num; i++)
    {
        if(std_id==s_id[i])
        {
            continue;
        }

        addStudent(i);

    }
}

void Student::showStudent(int num)
{
    for (int i=0; i<s_num; i++)
    {
        cout << "Name \t Id \t Course \t Level \t Email \t Address" << endl;
        cout << s_name[i] << "\t" << s_id[i] <<  "\t" << s_course[i] << "\t" << s_level[i] << "\t" <<s_email[i];
        cout << "\t" << s_address[i];
    }
    cout << endl;
}

void Student::deleteStudent(string std_id)

{


    for (int i=0; i<s_num; i++)
    {
        std_id=s_id[i];
       showStudent(i);
       cout << "Do you want to delete this?" << endl;
       cout << "1.Yes" << endl;
       cout << "2.No" << endl;
       cout << ">: ";
       cin >> choice;

        switch(choice)
        {
        case 1:

            {
                s_name[i]="";
                s_id[i]="";
            }
            break;
        default:
            break;
        }

    }
}


void Student:: printRecord()
{
    ofstream student;
    student.open("My_stdatabase.txt",ios::app);

     student << "*************************************************************************************************" <<endl;

      student << " ID" << "  " << "Name " << "     " << "Course" << "      " << "Level " << "     " << "Email" << "       " << "Address " << "         "<< "Mark" << endl;


       for (int i=0; i <s_num;i++)
       {
           student << s_name[i]<< endl;
           student << s_id[i]<< endl;
           student << s_course[i]<< endl;
           student << s_level[i]<< endl;
           student << s_email[i]<< endl;
           student << s_address[i]<< endl;

        student <<  "************************************************************************************************" << endl;

       }
       student << endl;

       student <<  "************************************************************************************************" << endl;


}
