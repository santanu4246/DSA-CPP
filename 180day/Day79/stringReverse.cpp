#include <bits/stdc++.h>
using namespace std;
void rev(string &s, int start, int end)
{
    if (start >= end)
        return;

    swap(s[start], s[end]);

    rev(s, start + 1, end - 1);
}
int main()
{
    string s = "santanu";
    rev(s, 0, s.size() - 1);
    cout << s;
    return 0;
}