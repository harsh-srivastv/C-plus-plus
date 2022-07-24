#include<bits/stdc++.h>
using namespace std;

int CountDistinct(int arr[], int n)
{
    int count = 0;
    bool isDistinct = true;
    for(int i=0; i<n ;i++)
    {
        isDistinct = true;
        for(int j=i-1; j>=0; j--)
        {
            if(arr[i]==arr[j])
            {
                isDistinct = false;
            }
        }
        if(isDistinct == true)
        {
            count++;
        }
    }
    return count;
}

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

    cout<<CountDistinct(arr, n);
    return 0;
}