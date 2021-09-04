#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,d,A,B,C;
        cin >> D >> d >> A >> B >>C;
        int ans = D * d;
        if (ans >= 42)
        {
            cout<<C<<endl;
        }
        else if (ans >= 21)
        {
            cout<<B<<endl;
        }
        else if (ans >= 10)
        {
            cout<<A<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}