// https://practice.geeksforgeeks.org/problems/structs-and-objects/1

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    Rectangle(){}
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    
};
int area(Rectangle r);
void maxArea(Rectangle arr[],int n);


// } Driver Code Ends
//User function Template for C++


int area(Rectangle r)
{
   //return length*breadth
   return r.length*r.breadth;
}


void maxArea(Rectangle arr[],int n)
{
   
   //Your code here. Use area function to calculate area of a reactangle object
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans, area(arr[i]));
    }
    cout<<ans<<endl;
}


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;//Number of rectangle objects
	    Rectangle arr[n]; //array of rectangle objects
	    for(int i=0;i<n;i++)
	    {
	        int l,b;
	        cin>>l>>b; //length and breadth of a object
	        Rectangle r(l,b); //creating a object r
	        arr[i]=r; //fill the array
	    }
	    maxArea(arr,n); //function to calculate maxArea
	}
	return 0;
}


// } Driver Code Ends