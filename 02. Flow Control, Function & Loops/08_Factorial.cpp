#include<bits/stdc++.h>
using namespace std;

// =========================:Iterative approach:===========================
int main()
{
    int n = 5;
    int ans = 1;
    while(n>0)
    {
        ans = ans*n;
        n--;
    }
    cout<<ans;
}

// =========================:Recursive approach:===========================
int fact(int n)
{
    if(n==0 or n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n = 6;
    cout<<fact(n);
}
