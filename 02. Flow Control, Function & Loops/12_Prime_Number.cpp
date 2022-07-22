// prime numbers are divisible by only 1 and numnber itself
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n==0 or n==1)
    {
        cout<<"Neither Prime nor Composite"; //1 and 0 are neither prime nor composite
    }

    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"NO";
            return 0;
        }
        i++;
    }
    cout<<"YES";
    return 0;
}