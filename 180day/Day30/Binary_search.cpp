#include<bits/stdc++.h>
using namespace std;
int binary_serach(vector<int>&arr,int n)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        //Find the mid
        int mid=s+((e-s)/2);
        if(arr[mid]==n)
        {
          return mid;
        }
        else if(arr[mid]<n)
        {
            s=mid+1;
        }
        else
        e=mid-1;
    }
    return -1;
}
int main()
{
vector<int>v={9,8,7,6,5,4};
int n=71;
int index=binary_serach(v,n);
if(index==-1)
{
    cout<<"Element Not Found";
}
else
{
cout<<"Your Element Present in index "<<index;
}
return 0;
}