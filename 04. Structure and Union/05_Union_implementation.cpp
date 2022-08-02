#include<bits/stdc++.h>
using namespace std;

union test
{
    int x;
    int y;
};

int main()
{   
    test t;
    t.x = 10;
    cout<<t.x<<" "<<t.y<<endl;
    t.y = 20;
    cout<<t.x<<" "<<t.y<<endl;
    cout<<sizeof(t);
    return 0;
}