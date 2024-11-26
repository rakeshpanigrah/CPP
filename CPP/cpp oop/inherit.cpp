#include <iostream>
using namespace std;

class Human
{
protected:
    int age;
    int height;
    int weight;

    void sleep()
    {
        cout << "sleeping " << endl;
    }
};

// nirmal inheritance
class male : protected Human
{
public:
    int sex;
    string hair;
    int strength;

    int getheight()
    {
        return this->height;
    }
};

int main()
{
    male ram;
    cout << ram.getheight();
    return 0;
}