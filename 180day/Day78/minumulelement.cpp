#include<bits/stdc++.h>
using namespace std;
int minelement (int arr[],int index,int n)
{
    if(index == n-1)
    {
        return arr[index];
    }
    return min(arr[index],minelement(arr,index+1,n));
}
int main(){
    int arr[] = {3,4,1,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"samllest element is: "<<minelement(arr,0,n);
    return 0;
}