#include <bits/stdc++.h>
using namespace std;
void printeven(int num , int target)
{
    if (num > target)
    {
        return;
    }
    cout << num << " ";
    printeven(num + 2,target);
}
int main()
{
    printeven(10,20);
    return 0;
}