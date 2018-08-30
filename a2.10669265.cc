#include <iostream>

using namespace std;

int main()
{

    int user_num;

    bool confirm=true;

    cout << "enter a positive integer" << endl;

    cin >> user_num;

   else
   {
       for(int divvid=2; divvid<user_num; divvid++)
       {
           if(user_num%divvid==0)
           {
               confirm=false;
               break;
                 }
       }
       if(user_num)
       {
           cout << " not Prime number";
       }
       else
       {
           cout << "Fuck you, is a prime number";
       }

   }
    if (user_num==0)
    {
       cout << "not a prime number";
    }
     if(user_num==1)
        {

        cout << "not a prime number";
        }

    return 0;
}
