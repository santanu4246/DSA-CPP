#include<bits/stdc++.h>
using namespace std;
int addDigit(int &n)
{
    while(n>9)
    {
    int sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    n=sum;
    }
    return n;
}
int main()
{
    
    int n;
    cin>>n;
    cout<<addDigit(n);

return 0;
}