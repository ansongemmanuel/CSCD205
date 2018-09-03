#include <iostream>

using namespace std;


int main()
{
    float grade;
cout <<"welcome to university of Ghana grading system";
cout << endl;


    cout << " please enter your grade ";
    cin >> grade;

    if ((grade > 80) && ( grade < 100)){

        cout <<" you had an  A";
    }
    else if ((grade > 74) && (grade < 80)){

        cout <<" you had a B+";
    }
    else if ((grade > 69) && (grade < 75)){

        cout <<" you had a B";
    }
    else if ((grade > 64) && (grade <70)){

        cout <<" you had a C+";
    }
    else if ((grade >59) && (grade < 65)){

        cout <<" you had a C";
    }
    else if ((grade >54) && (grade <60)){

        cout <<" you had a D+";
    }
    else if ((grade >49) && (grade <55)){

        cout <<" you had a D";
    }
    else if ((grade > 44) && (grade <50)){

        cout <<" you had an E";
    }
    else if ((grade >0) && (grade <44)){

        cout <<" you had an F";
    }










    return 0;
}
