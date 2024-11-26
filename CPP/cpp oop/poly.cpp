#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;
    complex()
    {
    }
    complex(int real, int img) : real(real), img(img) {}

    // operator overloading
    /* using void
    void operator+(complex &obj)
    {
        int val1 = this->real + obj.real;
        int val2 = this->img + obj.img;
        cout << val1 << "+" << val2 << "i";
    }*/
    // int type use mat karna only class or void
    complex operator+(complex &o)
    {
        return complex(this->real + o.real, this->img + o.img);
    }
    void display()
    {
        cout << real << "+" << img << "i";
    }
};
class sub
{
    int a;

public:
    sub() {}
    sub(int a) : a(a) {}

    sub operator+(sub &e)
    {
        sub res;
        res.a = this->a - e.a;
        return res;
    }
    void display()
    {
        cout << "+ ka sub value hai:" << a;
    }
};
int main()
{ /*
     complex n1(1, 2), n2(2, 3);
     complex n3 = n1 + n2;
     n3.display();*/
    sub n1(3), n2(4);
    sub n3 = n1 + n2;
    n3.display();

    return 0;
}