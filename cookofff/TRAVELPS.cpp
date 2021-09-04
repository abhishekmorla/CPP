#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        int is=0,id=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i) == '1')
            {
                is++;
            }
            else{
                id++;
            }
        }
        cout<<a*id+b*is<<endl;
        
    }
    
    return 0;
}