#include <bits/stdc++.h>
using namespace std;

class Employee {
public: // public access-modifier
    string id, name;
    int years;

    Employee()
    {
        id = "";
        name = "";
        years = 0;
    }

    // Overloaded constructor
    Employee(string id, string name, int years)
    {
        this->id = id;
        this->name = name;
        this->years = years;
    }

    // Overloaded constructor
    Employee(string id, string name)
    {
        this->id = id;
        this->name = name;
        years = 0;
    }

    void getDetails()
    {
        cout << "ID: " << id << ", Name: " << name
             << ", Experience: " << years << endl;
    }
};

int main()
{
    // 1st constructor is called
    Employee emp1;

    // 2nd constructor is called
    Employee emp2("GFG123", "John", 4);

    // 3rd constructor is called
    // where years is 0 (no experience for a fresher)
    Employee fresher("GFG456", "James");

    emp1.getDetails();
    emp2.getDetails();
    fresher.getDetails();

    return 0;
}