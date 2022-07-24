#include<bits/stdc++.h>
using namespace std;

int array_sum(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n, arr[n];
    cout<<"Enter Size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<array_sum(arr, n);
    return 0;
}