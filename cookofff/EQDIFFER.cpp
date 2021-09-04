#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector <int> v(n);
        map <int , int> map;
        int min=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            map[v[i]]++;
            // cout<<"value inside map : "<<map[v[i]]<<endl;
            min = max(min , map[v[i]]); // maximum frequency from map.
            // cout<<"min var : "<<min<<endl;
        }
        if (n <= 2)  //if the array have only 2 integer
        {
            cout<<0<<endl;
            continue;
        }
        if(min == 1) 
        {
            cout<<n-2<<endl;
            continue;
        }
        else
        {
            cout<<n - min <<endl;
        }
    }
    
    return 0;
}