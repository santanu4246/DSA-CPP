#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout << "Enter the size of array:";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != min)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}