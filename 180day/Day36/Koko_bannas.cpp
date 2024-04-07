#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int e=0,ans,mid;
        long long s=0;
        for(int i=0;i<piles.size();i++)
        {
            s+=piles[i];
            e=max(e,piles[i]);
        }
        s/=h;//minimum times need to eat all bannas
        if(!s)
        {
            s=1;//if s=0 then inisialize with 1
        }
        while(s<=e)
        {
            int time=0;
            for(int i=0;i<piles.size();i++)
            {
            mid=s+(e-s)/2;
            
            time+=piles[i]/mid;
            if(piles[i]%mid)
            {
                time++;}
            }
            if(time>h)
            {
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
};
int main()
{
return 0;
}
