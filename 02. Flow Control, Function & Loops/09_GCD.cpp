#include<bits/stdc++.h>
using namespace std;

// GCD is the greatest common divisor of the given numbers
int main()
{
    int a,b;
    cout<<"Enter 2 Numbers: ";
    cin>>a>>b;
    int answer = 0;
    if(a<b)
    {
        for(int i=1;i<=a;i++)
        {
            if((a%i==0)and(b%i==0))
            {
                answer = i;
            }
        }
    }
    else
    {
        for(int i=1;i<=b;i++)
        {
            if((a%i==0)and(b%i==0))
            {
                answer = i;
            }
        }
    }
    cout<<answer;
}