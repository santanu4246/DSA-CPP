#include <bits/stdc++.h>
using namespace std;
vector<int> prefix(vector<int> &arr)
{
    vector<int> ans;
    ans.push_back(arr[0]);
    if (arr.size() > 0)
    {
        for (int i = 1; i < arr.size(); i++)
        {
            ans.push_back(ans[i - 1] + arr[i]);
        }
    }
    return ans;
}
vector<int> suffix(vector<int> &arr)
{
    vector<int> ans;
    if (arr.size() > 0)
    {
        ans.push_back(arr[arr.size() - 1]);
        for (int i = arr.size() - 2; i >= 0; i--)
        {
            ans.push_back(ans.back() + arr[i]);
        }
        reverse(ans.begin(),ans.end());
    }
    return ans;
}
int main()
{
    vector<int> v{6, 4, 5, -3, 2, 8};
    vector<int> suffixsum = suffix(v);
    cout << "Suffix sum: ";
    for (int i = 0; i < suffixsum.size(); i++)
    {
        cout << suffixsum[i] << " ";
    }
    vector<int> prefixsum = prefix(v);
    cout << "Prefix sum: ";
    for (int i = 0; i < prefixsum.size(); i++)
    {
        cout << prefixsum[i] << " ";
    }

    return 0;
}