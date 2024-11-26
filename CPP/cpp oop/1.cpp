#include <iostream>
#include <cstring>
using namespace std;
class hero
{
    // property

    int health;
    int level;

public:
    char *name;
    // constructor defau;t
    hero()
    {
        name = new char[50];
    }
    ~hero()
    {
        delete[] name;
        cout << "bye";
    }
    hero(hero &temp)
    {
        name = new char[strlen(temp.name) + 1];
        strcpy(this->name, temp.name);
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }
    void print()
    {
        cout << name;
    }
};

int main()
{
    hero r;
    char name[10] = "ram";
    r.setname(name);
    r.print();
    // cout << endl;
    hero s;
    char nam[9] = "sam";
    s.setname(nam);
    s.print();

    return 0;
}