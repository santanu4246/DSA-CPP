#include<bits/stdc++.h>
using namespace std;
void print(int &a ,int &b,int &c)
{
    int temp;
temp=b;
b=a;
a=c;
c=temp;
}
int main()
{
    int a=10,b=20,c=30,temp;
print(a,b,c);
cout<<a<<" "<<b<<" "<<c;
return 0;
}