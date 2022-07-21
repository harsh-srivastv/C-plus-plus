#include<bits/stdc++.h>
using namespace std;
// LCM means lowest common multiple of the given numbers
int main()
{
    int a,b;
    cout<<"Enter 2 Numbers: ";
    cin>>a>>b;
    int start = max(a,b);
    int end = a*b;
    for(int i=start;i<=end;i++)
    {
        if((i%a==0)and(i%b==0))
        {
            cout<<i;
            break;
        }
    }
}