#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,6,7,181,115};
    int max=INT_MIN;
    int s_max;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            s_max=max;
            max=arr[i];
        }
        else if(max>s_max&&max!=s_max)
        {
            s_max=arr[i];
        }
    }
         cout<<"Second maximum:"<<s_max;
}
    