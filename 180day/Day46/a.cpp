#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
           mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            int s=it.second;
            if(s==1)
            {
                return it.first;
            }
        }
        return -1;
 
    }
};
int main()
{
    Solution s;
    vector<int>v{1,1,4,4,5,5,2};
    cout<<s.singleNumber(v);
}