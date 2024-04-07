#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long s = 0, e = 0, ans, mid;
        // inisilize s with maximum element of array
        // initialize e with sum of all element in array
        for (int i = 0; i < n; i++)
        {
           if(s<arr[i])
           {
            s=arr[i];
           }
            e += arr[i];
        }
        // implement binary search
        while (s <= e)
        {
            long long timecount = 0, paintercount = 1;
            mid = s + (e - s) / 2;
            for (int i = 0; i < n; i++)
            {
                timecount += arr[i];
                if (timecount > mid)
                {
                    paintercount++;
                    timecount = arr[i];
                }
            }

            if (paintercount <= k)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}
