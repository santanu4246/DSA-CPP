#include<bits/stdc++.h>
using namespace std;
int sumOfSquareOfNnumbers(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n*n + sumOfSquareOfNnumbers(n-1);
}
int main(){
    cout<< sumOfSquareOfNnumbers(3);
    return 0;
}