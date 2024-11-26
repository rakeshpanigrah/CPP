#include <iostream>
using namespace std;
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    fun(n / 2);

    cout << n % 2;
}
// 1ton
void print(int n,int k){
   
    if(n==0){
        return;
    }
    cout<<k<<" ";
    print(n-1,k+1);
}
int  sum(int n){
    if(n==0){
        return 0 ;
    }
    return n%10+sum(n/10);
}
int main()
{
   
    cout<<sum(9987);
    return 0;
}