#include<iostream>
using namespace std;
void subset (string &str,string curr,int index){
    if(index==str.length()){
        cout<<curr<<" ";
        return ;
    }

    subset(str,curr,index+1);
    subset(str,curr+str[index],index+1);
}
int main()
{
    string s = "ABC";
    subset(s,"",0);
    return 0;
}