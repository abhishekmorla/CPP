#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max,min;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (arr[1] > arr[0])
    {
       max = arr[1];
       min = arr[0];
    }
    else
    {
         max = arr[0];
       min = arr[1];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"Maximum is "<<max<<" Minimum is "<<min;
    

    
    return 0;
}