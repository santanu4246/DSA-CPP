#include<bits/stdc++.h>
using namespace std;
int longestfinpresuff(string s)
{
    vector<int>lps(s.size(),0);

    int pre = 0;
    int suff = 1;

    while(suff < s.size())
    {
        if(s[pre] == s[suff])
        {
            lps[suff] = pre + 1;
            pre++,suff++;
        }
        else{
            if(pre == 0)
            {
                lps[suff] = 0;
                suff++;
            }
            else{
                pre = lps[pre - 1];
            }
        }
    }
    return lps[lps.size() - 1];
}
int main(){
    string s = "geeksforgeeks";
    cout<<longestfinpresuff(s);
    return 0;
}