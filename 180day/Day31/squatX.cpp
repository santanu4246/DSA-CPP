#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 20;
    int s = 1;
    int e = target;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid == target)
        {
            ans = mid;
            break;
        }
        else if (mid*mid < target)
        {
            s = mid + 1;
            ans=mid;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
