#include <iostream>
using namespace std;
void update(int **p)
{
    // no but if you do cout
    //  p = p + 1;
    // cout << p;
    //*p = *p + 1;
    **p = **p + 1;
}
int main()
{
    int a = 6, b = 8;
    int *p1 = &a;
    int **p2 = &p1;
    /*   // print value of 6
       cout << a << " " << *p1 << " " << *(*p2) << endl;
       // print adress if a
       cout << &a << " " << p1 << " " << *p2 << endl;
       // print adress of p1
       cout << &p1 << " " << p2; */
    /*  cout << "before" << endl;
      cout << a << endl;
      cout << p1 << endl;
      cout << p2 << endl;
      update(p2);
      cout << "after" << endl;
      cout << a << endl;
      cout << p1 << endl;
      cout << p2 << endl; */
    cout << *p1 << endl;
    *p1 = b;
    cout << *p1;

    return 0;
}