// divide a array into 2parts is possible or not
#include<bits/stdc++.h>
using namespace std;
bool divide(vector<int>&arr)
{
    int totalsum=0;
    for(int i=0;i<arr.size();i++)
    {
        totalsum+=arr[i];
    }
    int prefix=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        prefix+=arr[i];
        if(totalsum-prefix==prefix)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    vector<int>v{3,4,-2,5,8,20,-10,8};
   cout<<divide(v);
return 0;
}