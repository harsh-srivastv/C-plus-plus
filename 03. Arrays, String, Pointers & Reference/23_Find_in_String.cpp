#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str = "geeksforgeeks";
    int res = str.find("fr");
    if(res == string::npos)
    {
        cout<<"not present";
    }
    else{
        cout<<"present at: "<<res;
    }
    return 0;
}