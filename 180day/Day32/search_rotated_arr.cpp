#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int t) {
        int s=0;
        int e=arr.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==t)
            {
                return mid;
            }
            //left side  
            else if(arr[mid]>=arr[0])
            {
                if(arr[s]<=t&&arr[mid]>=t)
                {
                    e=mid-1;
                }
                else
                {
                     s=mid+1;
                }
                   
                
            }
            //right side
            else
            if(arr[mid]<=t&&arr[e]>=t)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
           
        }
        return -1;
    }
};
int main()
{
return 0;
}