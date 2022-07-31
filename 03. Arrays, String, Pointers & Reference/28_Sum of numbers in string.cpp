// https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string-1587115621/1

//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	// Your code here
    	int ans = 0;
    	int value = 0;
    	for(int i=0;i<str.length();i++){
    	    if(str[i]-'0' < 10){
    	       value = value*10 + (str[i]-'0');  
    	    }
    	    else{
    	        ans += value;
    	        value = 0;
    	    }
    	}
    	ans += value;
    	return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends