#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int rat;
        cin>>rat;
        if(2000 <= rat)
        {
            cout<<"1"<<endl;
        }
        else if (1600 <= rat && rat <2000)
        {
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
    return 0;
}