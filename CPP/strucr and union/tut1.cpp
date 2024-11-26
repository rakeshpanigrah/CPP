#include <iostream>
using namespace std;
struct student
{
    /* data */
    int roll;
    string favchar;
    int marks;
};
union money
{
    int rupees;
    float dollar;
    bool paisa;
};

int main()
{
    student rakesh;
    /*rakesh.roll = 5;
     rakesh.favchar = "Tyson";
     rakesh.marks = 75;
     cout << rakesh.roll << " " << rakesh.favchar << " " << rakesh.marks;*/
    money ac;
    ac.paisa = 1;
    cout << ac.rupees << " " << ac.dollar << " " << ac.paisa;
    return 0;
}
