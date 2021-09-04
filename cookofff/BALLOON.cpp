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
        int n;
        cin>>n;
        int b=0,p=0;
        vector <int> a(n);
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        //loop to solve
        for (int j = 1; j <= n; j++)
        {
            if (a[j]<=7)
            {
                b++;
            }
            else if (b == 7)
            {
                continue;
            }
            else{
                p++;
            }

        }
        cout<<p+b<<endl;
        
        
    }
    return 0;
}