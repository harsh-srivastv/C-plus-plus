// https://practice.geeksforgeeks.org/problems/taking-input/1#
// { Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;

void inputData();

 // } Driver Code Ends
//User function Template for C++

void inputData()
{
    int a;
    string b;
    //Use cin to take input and cout a and b with a space between them. Also use an endl after output
    cin>>a;
    cin>>b;
    cout<<a<<" ";
    cout<<b;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //function call
        inputData();
        
    }
}


  // } Driver Code Ends