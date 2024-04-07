#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=-1;
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e)
        {
            mid=s+((e-s)/2);
            if(nums[mid]==target)
            {
                first=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            e=mid-1;
        }
        ans.push_back(first);

           s=0;
         e=nums.size()-1;
            int last=-1;
           while(s<=e)
        {
            mid=s+((e-s)/2);
            if(nums[mid]==target)
            {
                last=mid;
                s=mid+1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            e=mid-1;
        }
ans.push_back(last);
return ans;

    }
};
int main()
{
    Solution s;
    vector<int>v={1,2,2,2,2,2};
    int target=2;
    vector<int>arr=s.searchRange(v,target);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }


return 0;
}