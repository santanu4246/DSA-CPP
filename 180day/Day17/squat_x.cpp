#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
    long long int y=0;
    while(y*y<=x)
    {
        y++;
    }
    return y-1;
}
};
int main()
{
    Solution s;
    int n;
    cin>>n;
    cout<<s.mySqrt(n);
return 0;
}