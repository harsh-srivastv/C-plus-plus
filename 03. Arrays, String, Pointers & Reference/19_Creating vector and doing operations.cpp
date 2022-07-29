// https://practice.geeksforgeeks.org/problems/c-operators4602/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        vector<int> ans;
        ans.push_back(A+B);
        ans.push_back(A*B);
        if(A>B){
            ans.push_back(A-B);
            ans.push_back(A/B);
        }
        else{
            ans.push_back(B-A);
            ans.push_back(B/A);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends