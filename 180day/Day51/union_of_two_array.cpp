#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here
    vector<int> ans;
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (ans.size() == 0 || ans.back() != a[i]) // first element store, then next iteration check duplicate element condition
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n) // when second array is empty but fisrt array have elements
    {
        if (ans.size() == 0 || ans.back() != a[i])
        {
            ans.push_back(a[i]);
        }
        i++;
    }

    while (j < m) // oposite of first second while loop
    {
        if (ans.size() == 0 || ans.back() != b[j])
        {
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}
int main()
{

    return 0;
}
