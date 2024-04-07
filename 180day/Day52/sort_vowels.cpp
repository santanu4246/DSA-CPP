#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string sortVowels(string s)
    {
        vector<int> UpperCase(26, 0);
        vector<int> LowerCase(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                LowerCase[s[i] - 'a']++;
                s[i] = '#';
            }
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                UpperCase[s[i] - 'A']++;
                s[i] = '#';
            }
        }
        string ans;
        for (int i = 0; i < 26; i++) // for uppercase
        {
            char c = 'A' + i;
            while (UpperCase[i])
            {
                ans += c;
                UpperCase[i]--;
            }
        }

        for (int i = 0; i < 26; i++) // for lowercase
        {
            char c = 'a' + i;
            while (LowerCase[i])
            {
                ans += c;
                LowerCase[i]--;
            }
        }

        int first=0;
        int second=0;
        while(second<ans.size())
        {
            if(s[first]=='#')
            {
                s[first]=ans[second];
                second++;
            }
            first++;
        }
        return s;
    }
};
int main()
{
    Solution s;
    string name="lEetcOde";
    string op=s.sortVowels(name);
    for(int i=0;i<op.size();i++)
    {
        cout<<op[i];
    }
    return 0;
}