#include<bits/stdc++.h>
using namespace std;
vector<int> selection(vector<int>&v)
{
 int index=0;
    for(int i=0;i<v.size();i++)
    { 
        index=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<v[index])
            {
                index=j;
            }
        }
        swap(v[index],v[i]);
    }

}
int main()
{
    vector<int>v={1,2,3,4,5,6};
    selection(v);
   
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
return 0;
}