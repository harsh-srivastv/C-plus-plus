// https://practice.geeksforgeeks.org/problems/even-odd-turn-game1832/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findValue(int A, int B, int T) {
        // code here
        if ( T%2 == 0)
            return (max(A, B) / min(A, B));
        else
            return (max(2*A, B) / min(2*A, B));
    return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y, P;
        cin >> X >> Y >> P;
        Solution ob;
        cout << ob.findValue(X, Y, P) << "\n";
    }
}
// } Driver Code Ends