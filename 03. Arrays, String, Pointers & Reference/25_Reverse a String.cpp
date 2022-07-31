// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  string res = "";
  for(int i=str.length()-1;i>=0;i--){
      res += str[i];
  }
  return res;
  
}