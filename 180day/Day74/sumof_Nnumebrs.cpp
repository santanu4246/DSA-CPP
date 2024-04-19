#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);//5+(sum(4)) 1 t0 4
}
int main()
{
    cout << sum(5);
    return 0;
}