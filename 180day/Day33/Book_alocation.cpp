#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N)
        {
            return -1;
        }
        int s=0,e=0,ans,mid;
        //maximum element of array
         //sum of all element
        for(int i=0;i<N;i++)
        {
            s=max(s,A[i]);
            e+=A[i];
        }
       while(s<=e)
       {
        int pagesum=0,studentcount=1;
        int mid=s+(e-s)/2;
        for(int i=0;i<N;i++)
        {
            pagesum+=A[i];
            if(pagesum>mid)
            {
                studentcount++;
                pagesum=A[i];
            }
        }
        if(studentcount<=M)
        {
            ans=mid;
            e=mid-1;
        }
        else{
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