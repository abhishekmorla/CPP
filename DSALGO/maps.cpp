#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

// Map is an associative array

int main()
{
    map <string , int> marks;
    marks["Abhi"] = 98;
    marks["morla"] = 91;
    marks["pintu"] = 93;

    map <string , int> :: iterator itr;
    for (itr = marks.begin(); itr!=marks.end(); itr++)
    {
        cout<<(*itr).first << " " << (*itr).second <<endl;
    }
    return 0;
}