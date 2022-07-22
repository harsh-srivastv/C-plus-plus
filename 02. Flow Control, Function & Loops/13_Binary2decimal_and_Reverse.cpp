#include<bits/stdc++.h>
using namespace std;
//==================:Binary to Decimal:========================

int main()
{
    int n;
    cin>>n;
    int value = 0;
    int base = 1;

    while(n>0)
    {
        int last_digit = n%10;
        value = value + (last_digit*base);
        n = n/10;
        base = base*2;
    }
    cout<<value;
}

//==================:Decimal to Binary:========================

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    while(n>0)
    {
        int temp = n%2;
        v.push_back(temp);
        n=n/2;
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
}