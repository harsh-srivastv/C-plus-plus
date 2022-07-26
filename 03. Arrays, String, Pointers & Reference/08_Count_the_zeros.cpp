// https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1

#include <bits/stdc++.h>
using namespace std;

// ================:Traditional Method O(n):=========================
class Solution{   
    public:
    int countZeroes(int arr[], int n) {
    int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }
        return count;
    }
};
// ================:Binary Search Method O(logn):=========================

class Solution{   
public:
    int countZeroes(int arr[], int n) {
    // code here
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==1)
        low=mid+1;
        else
        {
            if(mid==0||arr[mid-1]==1)
            return n-mid;
            else
            high=mid-1;
        }       
    }
    return 0;
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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends