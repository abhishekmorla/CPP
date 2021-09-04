#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,e;
        int ct = 0;
        cin>>a>>b>>c>>d>>e;
        int s1=a+b;
        int s2=b+c;
        int s3=c+a;
       if((s1<=d && c<=e) || (s2<=d && a<=e) || (s3<=d && b<=e) )
       {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    
    return 0;
}