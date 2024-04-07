#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int n, int k, vector<int> &stalls)
    {

        // Write your code here
        int s=1,ans,mid;
        sort(stalls.begin(), stalls.end());
        int e = stalls[n - 1] - stalls[0];
        while (s <= e)
        {
            mid=s+(e-s)/2;
            int position = stalls[0], distanceCount = 1;
            for (int i = 1; i < n; i++)
            {
                if (position + mid <= stalls[i])
                {
                    distanceCount++;
                    position = stalls[i];
                }
            }
            if(distanceCount<k)
            {
               e=mid-1;
               
            }
            else{
               ans=mid;
               s=mid+1;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}