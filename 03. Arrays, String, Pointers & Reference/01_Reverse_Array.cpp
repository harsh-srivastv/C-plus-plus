#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test>0)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=n-1; i>=0; i--)
    	{
	    cout<<arr[i]<<" ";
    	}
	    test--;
	    cout<<endl;
	}
	
	
	return 0;
}