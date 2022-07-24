#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            cout<<false;
            return 0;
        }
    }
    cout<<true;
}