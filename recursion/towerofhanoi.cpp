#include<iostream>
using namespace std;
void toh(int n, char s , char h, char d){
    if(n==1){
      cout<<"move disk "<<n<<" from "<<s<<" to "<<d<<endl;
      return;
    }

    toh(n-1,s,d,h);
    cout<<"move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    toh(n-1,h,s,d);
}
int main()
{
    int n = 2;
     toh(n,'A','B','C');
    return 0;
}