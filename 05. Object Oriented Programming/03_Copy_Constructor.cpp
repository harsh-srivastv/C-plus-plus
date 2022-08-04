#include <bits/stdc++.h>
using namespace std;

class Array {
public:
    int n;
    int* ref;

    Array(int n)
        : n(n)
    {
        ref = new int[n];

        for (int i = 0; i < n; i++)
            *(ref + i) = i;
    }
};

int main()
{
    Array arr1(10);

    // copy constructor called
    // at this point
    Array arr2 = arr1;

    // changing n-value in 2nd instance
    arr2.n = 5;

    // changing array-values in 2nd instance
    for (int i = 0; i < 10; i++)
        *(arr2.ref + i) *= 2;

    cout << "n-value of 1st instance: " << arr1.n << endl;
    cout << "Array values of 1st instance:\n";
    for (int i = 0; i < 10; i++)
        cout << *(arr1.ref + i) << " ";
    cout << endl;

    return 0;
}