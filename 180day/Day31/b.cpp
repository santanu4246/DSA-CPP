#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        int s=1;
        int e=n;
        int ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            long long cube=(long long)mid*mid*mid;
            if(cube==n)
            {
                ans=mid;
                break;
            }
            else if(cube<n)
            {
                ans=mid;
                s=mid+1;
            }
            else{
                
                e=mid-1;
            }
        }
         return ans;
    }
};
int main()
{
    Solution s;
    cout<<s.cubeRoot(3);

return 0;
}