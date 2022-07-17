#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=true;
    cout<<a<<endl;
    cout<<std::boolalpha;
    cout<<a<<"\n";

    int x=26, y=20;
    cout<<x<<" "<<y<<"\n";
    cout<<hex;                  //print hexadecimal value
    cout<<x<<" "<<y<<"\n";
    cout<<oct;                  //print octal value
    cout<<x<<" "<<y<<"\n";
    cout<<dec;                  //print decimal value
    cout<<x<<" "<<y<<"\n";
}