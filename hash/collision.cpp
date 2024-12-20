#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class myhash{
   public:
   int bucket;
   list <int> *table;
   myhash(int b){
      int nucket = b;
      table = new list <int> [bucket];
   }

   void insert(int k){
    int i = k % bucket;
    table[i].push_back(k);
   }

   void remove(int k ){
    int i = k % bucket;
    table[i].remove(k);
   }
   bool search (int k ){
      int i = k % bucket;
       for(auto x : table[i]){
         if(x==k){
            return true;
         }
       }
       return false;
   }
};
int main()
{
     myhash mh(7);
	    mh.insert(10);
	    mh.insert(20);
	    mh.insert(15);
	    mh.insert(7);
	    cout << mh.search(10) << endl;
	    mh.remove(15);
	    cout << mh.search(15);
    return 0;
}