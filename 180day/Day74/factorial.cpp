#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    n = 20;
    if(n < 0)
    {
        cout<<"Factorial is not possible"<<endl;
    }
    cout<<fact(n);
    return 0;
}