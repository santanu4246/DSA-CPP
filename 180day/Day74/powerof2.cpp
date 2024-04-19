#include <bits/stdc++.h>
using namespace std;
int pow(int n, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return n * pow(n, power - 1);
}
int main()
{
    cout << pow(2, 5);
    return 0;
}