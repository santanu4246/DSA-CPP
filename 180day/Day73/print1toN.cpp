#include <bits/stdc++.h>
using namespace std;
// void print(int num,int n)
// {
//     if(num == n)
//     {
//         cout<<num;
//         return;
//     }
//     cout<<num<<" ";
//     print(num+1,n);
// }

void print(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    print(n - 1);
    cout << n << " ";
}
int main()
{
    print(10);
    return 0;
}