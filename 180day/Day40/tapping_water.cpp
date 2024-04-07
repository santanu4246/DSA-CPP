#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        int leftmax[n], rightmax[n];
        leftmax[0] = 0;
        rightmax[n - 1] = 0;
        for (int i = 1; i < n; i++)
        {
            leftmax[i] = max(leftmax[i - 1], height[i - 1]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            rightmax[i] = max(rightmax[i + 1], height[i + 1]);
        }
        int water = 0;
        for (int i = 0; i < n; i++)
        {
            int minilenght = min(leftmax[i], rightmax[i]);
            if (minilenght - height[i] >= 0)
            {
                water += minilenght - height[i];
            }
        }
        return water;
    }
};
int main()
{
    Solution s;
    cout << "Enter the size of vector:";
    int n;
    cin >> n;
    cout << "Enter the element of vector:";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << s.trap(v);
    return 0;
}
