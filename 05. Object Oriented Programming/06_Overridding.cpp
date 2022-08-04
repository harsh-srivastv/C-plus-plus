#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
        void whoami() {
            cout<<"I'm Base Class!!\n";
        }
};

class Derived : public Base {
    public:
        void whoami() {
            cout<<"I'm Derived Class!!\n";
        }
};

int main()
{   
    Base b;
    Derived d;

    b.whoami();
    d.whoami();

    return 0;
}