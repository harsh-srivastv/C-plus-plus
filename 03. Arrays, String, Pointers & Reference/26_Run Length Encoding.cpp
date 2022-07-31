// https://practice.geeksforgeeks.org/problems/run-length-encoding/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int count = '1';
  string res = "";
  for(int i=1;i<src.length();i++){
      if(src[i-1]==src[i]){
          count += 1;
      }
      else{
          res += src[i-1];
          res += count;
          count = '1';
        //   cout<<res<<endl;
      }
  }
  res += src[src.length()-1];
  res += count;
  return res;
}     
 
