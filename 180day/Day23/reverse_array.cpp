#include <bits/stdc++.h>
using namespace std;
int* rev(int arr[],int &n)
{ 
    int *reversed=new int[n];

  for(int i=0;i<n;i++)
  {
    reversed[i]=arr[n-1-i];
  }
  return reversed;
}
int main()
{
    int arr[]={12,24,25,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int *revarr=rev(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<revarr[i]<<" ";
    }
    delete[] revarr;
    return 0;
}