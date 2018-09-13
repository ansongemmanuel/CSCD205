#include <iostream>
#include <cmath>

int greatest_common_factor(int yourfirstnum,int yoursecondnum)
{
    if(yoursecondnum !=0)
    {
        return(yoursecondnum,yourfirstnum %yoursecondnum);
    }
    else
    {
        return yourfirstnum;
    }
}


using namespace std;



int main()
{

    cout << "Welcome ansong's world of greatest common factor \n";

    int x,y;

    cout << "Enter your first integer\n";
    cin >>x;

    cout << "Enter your second integer\n";
    cin >>y;

    int high_fact;

    high_fact=greatest_common_factor(x,y);

    cout << "The Greatest common divisor of the two numbers is :  "<< high_fact<<endl;



    return 0;
}
