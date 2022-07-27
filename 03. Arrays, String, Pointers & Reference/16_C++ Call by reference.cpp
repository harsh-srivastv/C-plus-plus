// https://practice.geeksforgeeks.org/problems/c-call-by-reference/1

//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int a1=a, b1=b;
    int na=0, nb=0;
    
    while(a1>0){
        na = na*10 + a1%10;
        a1=a1/10;
    }
    while(b1>0){
        nb = nb*10 + b1%10;
        b1=b1/10;
    }
    a = na;
    b = nb;
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp = a;
    a = b; 
    b = temp;
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends