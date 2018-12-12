#include "Lecturer.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

void Lecturer::student_mark(int course_num)

{
    for (int i=0; i<course_num;i++)
    {

        cout << student_course[i];
        cout << "\t\t\t ";
        cin >> mark[i];
    }
    cout << endl;
}

void Lecturer::assign_course(string student_id)
{

    for (int i=0;i< student_num;i++)
    {

        cout << student_course[i];
        cin >> student_course[i];
    }
    cout << endl;

}
