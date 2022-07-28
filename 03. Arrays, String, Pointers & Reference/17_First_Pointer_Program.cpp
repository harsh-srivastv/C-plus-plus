#include<bits/stdc++.h>
using namespace std;
// pointer helps to update the value of the variable it is pointing to
void func(int *p){
    *p  =*p + 10;
}
// passing string as pointer will ot create an additional copy of the string
void func1(string *p){
    cout<<*p<<" ";
}

int main()
{
    int x = 10;
    string str = "Harsh Srivastava";
    func1(&str);
    func(&x);
    cout<<x;
    return 0;
}

