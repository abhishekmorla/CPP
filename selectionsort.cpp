#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int getmax(vector<int>& arr , int start , int end )
{
    int max=start;
    for (int i = start; i <= end; i++)
    {
        if( arr[max] < arr[i] )
        {
            
            max = i;
        }
    }
    return max;
}

void swap (vector<int>& arr, int a , int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void selectionsort(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int last = arr.size() - i - 1;
        int maxind = getmax(arr , 0 , last);
        swap(arr , maxind , last);
        
    }

}

int main()
{
    vector <int> arr = {12,3,2,31,4,6};
    selectionsort(arr); 
    
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}