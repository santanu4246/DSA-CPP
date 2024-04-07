#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rem, ans = 0, base = 1;
    cin >> n;
    while (n)
    {
        rem = n % 8;
        n /= 8;
        ans = ans + rem * base;
        base *= 10;
    }
    cout << ans;
    return 0;
}