#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Student
{
    int ID_number[5];
    string name[5];
    int Age[5];
    string Gender[5];
    double Score[5];
    string grade[5];

};
int main()

{

    double total_scores=0;
    int  total_age=0;

    int count_male=0;

    int count_female=0;

    double average_score=0;

    double average_age=0;

    int num_students;

    num_students=5;

    double my_score;

    Student ansong;

    for (int i=0; i<num_students; i++)

    {
       cout << "Enter your ID: ";
       cin >> ansong.ID_number[i];
       cout << "\n Enter your Name: ";
       cin >> ansong.name[i];
       cout << "\n Enter your age: ";
       cin >> ansong.Age[i];
       cout << "\n Enter your Gender: ";
       cin >> ansong.Gender[i];
       cout << "Enter your Score: ";
       cin >> ansong.Score[i];

       if (ansong.Score[i]>80 && ansong.Score[i]<=100)
       {
           ansong.grade[i]="A";
       }

       else if (ansong.Score[i] >=70 && ansong.Score[i] <80)
       {
          ansong.grade[i]="B";
       }
       else if (ansong.Score[i]>=60 && ansong.Score[i] <70)
       {
          ansong.grade[i]="C";
       }
       else if(ansong.Score[i]>=50 && ansong.Score[i]<60)
       {
           ansong.grade[i]="D";
       }
       else if(ansong.Score[i] >=40 &&ansong.Score[i]<50 )
       {
           ansong.grade[i]="E";
       }
       else
       {
           ansong.grade[i]="F";
       }


       cout << endl;

                  if (ansong.Gender[i]=="male")
           {
               count_male++;
           }
           else if( ansong.Gender[i]=="female")
           {
               count_female++;
           }


    }


cout << "*************************************************************************************************" <<endl;
cout << " ID" << "      " << "Name " << "       " << "Age" << "             " << "Gender " << "         " << "Score" << "        " << "Grade " << endl;

cout << "************************************************************************************************" << endl;
    for (int i=0;i <num_students; i++)
    {

        total_scores=total_scores+ansong.Score[i];

           total_age= total_age+ansong.Age[i];

          average_score= total_scores/num_students;

           average_age= total_age/num_students;

            cout << ansong.ID_number[i] << "\t" << ansong.name[i] << "\t" << ansong.Age[i] << "\t" << ansong.Gender[i];
        cout << "\t" << ansong.Score[i] << "\t" << ansong.grade[i] ;

       cout << endl;
    }



    cout << "The average age is:  " << average_age << endl;

    cout << "The average score is: " << average_score << endl;

    cout << "The number of females are: " << count_female << endl;

    cout << "The number of males are: " << count_male << endl;

    ofstream A_student;
    A_student.open("Mystudents.txt", ios:: app);

    A_student<< "*************************************************************************************************" <<endl;

    A_student << " ID" << "  " << "Name " << "     " << "Age" << "      " << "Gender " << "     " << "Score" << "       " << "Grade " << endl;

    A_student <<  "************************************************************************************************" << endl;

     for (int i=0;i <num_students; i++)
    {

          total_scores=total_scores+ansong.Score[i];

           total_age= total_age+ansong.Age[i];

          average_score= total_scores/num_students;

           average_age= total_age/num_students;

            A_student << ansong.ID_number[i] << "\t" << ansong.name[i] << "\t" << ansong.Age[i] << "\t" << ansong.Gender[i];
        A_student << "\t" << ansong.Score[i] << "\t" << ansong.grade[i] ;

       A_student << endl;
    }

     A_student << "The average age is:  " << average_age << endl;

    A_student << "The average score is: " << average_score << endl;

   A_student << "The number of females are: " << count_female << endl;

    A_student << "The number of males are: " << count_male << endl;

    A_student.close();




    return 0;
}
