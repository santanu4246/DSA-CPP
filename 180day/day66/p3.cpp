#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5, b = 10;

    int &name = a;

    int *ptr = &a;

    (*ptr)++;
    *ptr = *ptr+5;
    name+=5;
    cout<<a<<" "<<b;
    return 0;
}