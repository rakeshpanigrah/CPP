#include <iostream>
using namespace std;

class student
{
private:
    int age;
    int rollno;
    char div;
    string name;

public:
    // default constuctor
    student()
    {
        cout << "bhai agaya";
    }
    student(char div, string name, int age, int rollno)
    {
        this->div = div;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }

    void print()
    {
        cout << name << endl
             << div << endl
             << age << endl
             << rollno << endl;
    }
};
int main()
{
    string name = "raj";
    student raj('A', name, 18, 34);
    raj.print();
    return 0;
}