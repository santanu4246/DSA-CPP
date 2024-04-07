#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rem, ans = 0, mul = 1;
    cin >> n;
    while (n)
    {
        rem = n % 2;
        n /= 2;
        ans += rem * mul;
        mul *= 10;
    }
    cout<<ans;

    return 0;
}