// https://practice.geeksforgeeks.org/problems/the-size-of/1#
// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void dataTypes(int, float, double, long long, string);


 // } Driver Code Ends
//User function Template for C++

// Function to find size of different data types
void dataTypes(int a, float b, double c, long long l, string d){
    float p = b/c;
	double q = b/a;
	float r = c/a;
	double m = r + l;
	cout << sizeof(p) << " " << sizeof(q) << " " << sizeof(r) << " " << sizeof(m) << endl;
	cout << sizeof(d) << " " << sizeof(d[3]) << endl;
	auto res = b/c;
    
}

// { Driver Code Starts.

// Driver Code
int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    
    int t;
    cin >> t;
    
    while(t--){
        
        cin >> a >> b >> c >> l >> d;
    
        dataTypes(a, b, c, l, d);
    }
    
    return 0;
}  // } Driver Code Ends