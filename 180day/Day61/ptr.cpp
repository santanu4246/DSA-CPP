#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    cout << &a << endl;

    int *ptr = &a;
    cout << ptr << endl;
    cout << a << endl;
    a = *ptr + 5;
    cout << a << endl;

    float m = 2.6;
    float *ptr1 = &m;
    cout << ptr1 << endl;

    cout << sizeof(ptr1); 
    cout << endl;
    cout << sizeof(ptr);
    return 0;
}