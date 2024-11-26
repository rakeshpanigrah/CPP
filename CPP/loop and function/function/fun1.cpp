#include <iostream>
using namespace std;
float pow() // float pow( int a,int b)
{
    float a, b;
    cout << "enter any two number: ";
    cin >> a >> b;
    float s = 1;
    for (int i = 1; i <= b; i++)
    {
        s = s * a;
    }
    return s;
}
bool iseven()
{
    int num;
    cout << "enter an number" << "\n";
    cin >> num;
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}
// 2 function to calculate ncr part 1.
int fact(int a)
{
    int s = 1;
    for (int i = 1; i <= a; i++)
    {
        s = s * i;
    }
    return s;
}
// ncr part 2
int ncr()
{
    int n, r;
    cout << "enter n and r" << endl;
    cin >> n >> r;
    int num = fact(n);
    int deno = fact(r) * fact(n - r);
    return num / deno;
}
// print the number upto given  n integer.
void countprint(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
// prime numbeer.
bool isprime()
{
    int n;
    cout << "enter an number" << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    // int c,d; cin>>c>>d;
    // pow(a,b) if input function ma hai  nahi toh pow(c,d)//c,d main intput lega
    // cout << pow() << endl;

    // cout<<iseven();

    // cout << "the value of ncr is " << ncr();

    /* int num;
     cout << "enter an number: " << "\n";
     cin >> num;
     countprint(num); */

    /* if (isprime())
     {
         cout << "prime number";
     }
     else
     {
         cout << "not prime number";
     }
     */

    return 0;
}