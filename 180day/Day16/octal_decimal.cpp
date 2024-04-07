#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,ans=0,mul=1;
    cin>>n;
while(n)
{
    rem=n%10;
    n/=10;
    ans=rem*mul+ans;
    mul*=8;
}
cout<<ans;
return 0;
}