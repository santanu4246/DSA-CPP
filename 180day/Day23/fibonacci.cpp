// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t1=0,t2=1;
//     int n;
//     cin>>n;
//     cout<<"your series:"<<t1<<" "<<t2<<" ";
//     for(int i=2;i<=n;i++){
//       int ans=t1+t2;
//         cout<<ans<<" ";
//         t1=t2;
//         t2=ans;
        
//     }
// return 0;
// } 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n-1;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];
return 0;
}
