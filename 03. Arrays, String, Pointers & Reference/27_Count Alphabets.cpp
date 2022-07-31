// https://practice.geeksforgeeks.org/problems/count-alphabets3649/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}


// } Driver Code Ends


int Count(string S){
    //complete the function here
    int count = 0;
    for(int i=0;i<S.length();i++){
        if(isalpha(S[i])){
            count++;
        }
    }
    return count;
}
