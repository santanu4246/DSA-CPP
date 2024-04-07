#include<bits/stdc++.h>
using namespace std;
void print(int &n)
{
    for(int i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            continue;
        }
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
return 0;
}