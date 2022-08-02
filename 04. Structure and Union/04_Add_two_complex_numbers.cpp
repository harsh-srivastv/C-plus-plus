#include<bits/stdc++.h>
using namespace std;

struct add_complex
{
    int real;
    int img;
};

int main()
{
    add_complex n1, n2, n3;
    cout<<"enter first complex number: ";
    cin>>n1.real>>n1.img;
    cout<<"enter first complex number: ";
    cin>>n2.real>>n2.img;

    n3.real = n1.real + n2.real;
    n3.img = n1.img + n2.img;

    cout<<n3.real<<" + "<<n3.img<<"i";

    return 0;
}