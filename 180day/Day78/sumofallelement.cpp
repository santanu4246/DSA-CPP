#include <bits/stdc++.h>
using namespace std;
int printsum(int arr[], int n, int index)
{
    int sum = 0;
    if (index == n)
    {
        return 0;
    }
    return arr[index] + printsum(arr,n,index+1);
}
int main()
{
    int arr[] = {1,2,3};
    int n  = sizeof(arr)/sizeof(arr[0]);
    cout<<printsum(arr,n,0);
    return 0;
}