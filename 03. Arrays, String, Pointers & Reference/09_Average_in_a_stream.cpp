// https://practice.geeksforgeeks.org/problems/average4856/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> answer;
	    float sum = 0;
	    for(int i=0;i<n;i++){
	        sum = sum + arr[i];
	        float mean = sum/(i+1);
	        answer.push_back(mean);
	    }
	    return answer;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends