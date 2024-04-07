#include<bits/stdc++.h>
using namespace std;
int fact(int &n)
{
    int fact=1;
    int i=1;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);

return 0;
}