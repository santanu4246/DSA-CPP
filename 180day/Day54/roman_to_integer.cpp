#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int roman(char c)
    {
        if (c == 'I')
        {
            return 1;
        }
        else if (c == 'V')
        {
            return 5;
        }
        else if (c == 'X')
        {
            return 10;
        }
        else if (c == 'L')
        {
            return 50;
        }
        else if (c == 'C')
        {
            return 100;
        }
        else if (c == 'D')
        {
            return 500;
        }
        else if (c == 'M')
        {
            return 1000;
        }
        return -1;
    }
    int romanToInt(string s)
    {
        int index = 0;
        long long ans = 0;
        while (index < s.size() - 1)
        {
            if (roman(s[index]) < roman(s[index + 1]))
            {
                ans -= roman(s[index]);
            }
            else
            {
                ans += roman(s[index]);
            }
            index++;
        }
        ans += roman(s[index - 1]);
        return ans;
    }
};
int main()
{
    Solution s;
    string ab = "MCMXCIV";
    cout << s.romanToInt(ab);
    return 0;
}