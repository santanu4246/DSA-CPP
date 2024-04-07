// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     // v.clear();
//     //  v.erase(v.begin()+2);
//     // v.pop_back();
//     //  v.push_back(5);
//     //  v.push_back(1);
//     //  v.push_back(4);
//     //  v.push_back(7);
//     //  v.push_back(7);
//     // v[0]=6;
//     cout << "Elememts of vectors:";
//     for (auto it = v.rbegin(); it != v.rend(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
//     sort(v.begin(), v.end(), greater<int>());//sort decreaseing order
//     v.insert(v.end(), 30);//insert element
//     cout << "sorted value of vectors:";
//     for (auto it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
//     cout << "Capacity of vector:" << v.capacity() << endl;
//     cout << "size of vector:" << v.size() << endl;
//     cout << "vector first element:" << v.front() << endl;
//     cout << "vector last element:" << v.back() << endl;
//     cout << "Vector empty or not:" << v.empty() << endl;
//     cout<<binary_search(v.begin(),v.end(),5);
//     cout<<find(v.begin(),v.end(),4)-v.begin();
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>&arr,int target)
{
    int s=0;
    int e=arr.size();
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==target)
        {
            return mid;
            break;
        }
        else if(arr[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;

}
int main()
{
    vector<int>v{1,2,3,4,45};
    int n=45;
    cout<<"Your element present in: "<<binary_search(v,n)<<" index";
return 0;
}