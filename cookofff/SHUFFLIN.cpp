#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        int ae = 0, ao = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0) // even
            {
                ae++; //no of even stores
            }
            else
            {
                ao++;
            }
        }

        int odd = n / 2;
        int even = n / 2;
        if (n % 2 == 1)
        {
            odd++;
        }
        cout << min(odd, ae) + min(even, ao) << endl;
    }

    return 0;
}