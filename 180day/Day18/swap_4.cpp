#include<bits/stdc++.h>
using namespace std;
void check(int &a,int &b,int &c,int &d)
{
    a=a+b+c+d;
    b=a-b-c-d;
    c=a-b-c-d;
    d=a-b-c-d;
    a=a-b-c-d;
}
int main()
{
    int a=10,b=20,c=30,d=40;
    check(a,b,c,d);
    cout<<"A="<<a<<" "<<"b="<<b<<" "<<"C="<<c<<" "<<"D="<<d;
return 0;
}