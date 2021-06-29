// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>

using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--) // how many time will the code execute.
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}



string reverseWord(string str){
    string empty;
   for (int i = str.size()-1 ; i >= 0 ; i-- )
   {
      empty = empty + str[i];
   }
   return empty;
   
}