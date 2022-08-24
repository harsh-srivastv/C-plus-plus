// https://practice.geeksforgeeks.org/problems/find-duplicates-under-given-constraints0856/1?page=1&category[]=Arrays&sortBy=accuracy

//{ Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}
// } Driver Code Ends


    

int findDuplicate(int A[])
{
    // Your code goes here
    int n = 10;
    int i=0;
    int j=1;
    while(j<n){
        if(A[i]==A[j])
            return A[i];
        
        i++;
        j++;
        
    }
    cout<<n;
    return -1;
}