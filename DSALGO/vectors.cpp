 #include <iostream>
#include <bits/stdc++.h>
#include <string>
#include<vector>
using namespace std;

template <class T>



void display(vector <T> &v)

{

    for (int i= 0; i <v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    //Ways to create a vector
    vector <int> vec1; // Zero length vector
  



    int element,size=5;
    // cout<<"Enter the size of your vecotr"<<endl;
    // cin>>size;
    // for(int i =0; i < size ; i++)
    // {
    //     cout<<"Enter an element to add to this vector";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    
    // display(vec1);
    // // vec1.pop_back(); 
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5, 566);


    // display(vec1);

    vector <char> vec2(4); // 4 element character vector
    // vec2.push_back('3');
    // display(vec2);
    // vector <char> vec3(vec2); // 4 element character vector from vec2
    // display(vec3);
    
    // vector <int> vec4(3 , 13); // 6 element vector of 3s
    vector <int> vec4;
    for (int i=1; i<=4; i++){   
        vec4.push_back(i);
    }
    vector <int> :: iterator iter = vec4.begin();
    display(vec4);
    vec4.erase(iter+2); // removes the 3rd element
    display(vec4);

    
    return 0;   
}