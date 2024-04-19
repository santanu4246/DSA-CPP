#include<bits/stdc++.h>
using namespace std;
void lowertoUpper(string &s, int ind)
{
    if(ind == -1)return;

    s[ind] = 'A' + s[ind] - 'a';

    lowertoUpper(s,ind-1);
}
int main(){
    string s = "santanu";
    lowertoUpper(s,s.size()-1);
    cout<<s;
    return 0;
}