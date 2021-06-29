#include <iostream>
#include <algorithm>
#include <vector>  
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n1,element1,n2,element2;
    cin>>n1;
    vector <int> vec1;
    for (int i = 0 ; i < n1; i++)
    {
        cin>>element1;
        vec1.push_back(element1);
    }
    cin>>n2;
    for (int i = 0 ; i < n2; i++)
    {
       cin>>element2;
       vector <int> :: iterator low = lower_bound(vec1.begin() , vec1.end() , element2) ;
       
       if (vec1[low- vec1.begin()] == element2)
       {
           cout<<"Yes "<< (low- vec1.begin() +1 ) <<endl;
       }
       else
        {
            cout<<"No "<< (low- vec1.begin() +1 ) <<endl;
        }
    }
  
    return 0;
}