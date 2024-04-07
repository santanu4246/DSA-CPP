#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
    if(a<2)
    {
        return 0;
    }
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}

int fact(int a)
{
    int factorial=1;
    for(int i=1;i<=a;i++)
    {
        factorial*=i;
        
    }
    return factorial;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<prime(a)<<endl;
    cout<<prime(b)<<endl;
    cout<<fact(a)<<endl;
    cout<<fact(b)<<endl;
    cout<<prime(b-a)<<endl;
    cout<<fact(b-a)<<endl;
return 0;
}