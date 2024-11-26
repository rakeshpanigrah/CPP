#include<iostream>
using namespace std;
int maxcut(int n, int a,int b ,int c){
    if(n==0){
        return 0;
    }
    if (n<=-1){
        return -1;
    }

    int res = max(maxcut(n-a,a,b,c),max(maxcut(n-b,a,b,c),maxcut(n-c,a,b,c)));
    if(res == -1){
        return -1;
    }

    return res+1;
}
int main()
{
    cout<<"the max no. of cut "<<maxcut(5,2,2,2);
    return 0;
}