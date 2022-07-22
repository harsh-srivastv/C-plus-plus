#include<bits/stdc++.h>
using namespace std;

// ======================:Iterative Approach:====================================
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int a=1;
    int b=1;
    int c=0;
    cout<<"1 1 ";
    for(int i=2;i<n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c; 
    }
}
// ======================:Recursive Approach:====================================
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    
    for(int i=1;i<n;i++)
    {
        cout<<fibo(i);
    }
}