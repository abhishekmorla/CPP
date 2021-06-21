#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void display(vector <int> &v){
    for (int i= 0; i <v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,element;
    cin>>n;
    vector <int> vec1;
    for (int i = 0 ; i < n; i++)
    {
        cin>>element;
        vec1.push_back(element);
    }
    int x;
    cin>>x;
    vector <int> :: iterator iter = vec1.begin();
    vec1.erase(iter+x-1);
    int a , b;
    cin>>a>>b;
    vec1.erase(iter+a-1,iter+b-1);
    cout<<vec1.size()<<endl;
    display(vec1);
    return 0;
}