#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
     int t,x;
     cin>>t;
     set<int>s;
     while(t--)
     {
         int type,x;
         cin>>type>>x;
         if (type ==1 ){
             s.insert(x); 
         }
         if (type == 2)
         {
             s.erase(x);
         }
         if (type  ==3)
         {
             set<int>::iterator itr=s.find(x);
             if (itr==s.end())
             {
                 cout<<"No"<<endl;
             }
             else {
             cout<<"Yes"<<endl;
             }
         } 
     }
    return 0;
}



