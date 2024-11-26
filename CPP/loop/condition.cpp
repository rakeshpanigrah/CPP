#include <iostream>
using namespace std;
int main()
{
    /* int a, b;
     cout << "Enter the value of a &b"
          << "\n";
     cin >> a >> b;
     //using only if
     /*
      only using if
       if (a > 0)
      {
          cout << "A is +ve";
      }
      if (a < 0)
      {
          cout << "Ais -ve";
      }
      if (a == 0)
      {
          cout << "A is equal to zero";
      }*/

    // use if & else both negative positive and zero
    /* if (a > 0)
     {
         cout << "A is +ve";
     }
     else
     {
         if (a < 0)
         {
             cout << "A is - ve";
         }
         else
         {
             cout << "A is equal to zero";
         }
     }*/
    // if and else for greater and smaller
    /* if (a > b)
     {
         cout << "A is greater";
     }
     else
     {
         cout << "B is greater";
     }*/
    // love babbar hw question 1 using if else if
    /*    if (a > 20)
        {
            cout << "Rakesh ";
        }
        else if (a == 24)
        {
            cout << "Jungle fury red ranfer";
        }
        else
        {
            cout << "you are fail";
        }*/

    char a;
    cout << "Enter a character or number\n";
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "it is lowercase";
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << "It is uppercase";
    }
    else
    {
        cout << "it is a number";
    }
    return 0;
}