#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=arr1[i][i];
    }
    cout<<sum<<endl;
    int sum2=0;
    int i=0,j=3-1;
    while(j>=0)
    {
        sum2+=arr1[i][j];
        i++;
        j--;
    }
    cout<<sum2;
return 0;
}