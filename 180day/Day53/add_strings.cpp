#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        long long  a=stoll(num1);
        long long  b=stoll(num2);
        
        long long c=a+b;
        string s=to_string(c);
        return s;
    }
};
int main()
{
    Solution s;
    string num1 = "6913259244";
    string num2 = "71103343";
    cout<<s.addStrings(num1,num2);
return 0;
}