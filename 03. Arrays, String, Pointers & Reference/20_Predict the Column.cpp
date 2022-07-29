// https://practice.geeksforgeeks.org/problems/predict-the-column/0?page=3&category%5B%5D=Matrix&query=page3category%5B%5DMatrix

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int n){
        
        // Your code here
        vector<vector <int>> ans(n, vector <int>(n,0));
        int max = n+1;
        int col;
        // int sum= 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j] = arr[j][i];
            }
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum = sum + ans[i][j];
            }
            // cout<<sum;
            if(sum<max){
                max = sum;
                col = i;
            }
        }
        return col;
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends