/**
This is a the Student class which helps us to create student objects.
The class contains functions and data members to help us process instances of this class
**/

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student
{

    public:
        Student();
        int choice;
         string s_name[250];
        string s_id[250];
        string s_course[250];
        string s_level[250];
        string s_email[250];
        string s_address[250];
        int s_num;



        void addStudent(int num);
        void deleteStudent(string std_id);
        void editStudent(string std_id);
        void showStudent(int num);
        void printRecord();

    protected:

    private:

};

#endif // STUDENT_H
