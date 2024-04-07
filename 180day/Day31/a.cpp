#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int s=0;
        int e=n-1;
        int first=-1;
        while(s<=e)
        {
            int mid=s+((e-s)/2);
            if(arr[mid]==0)
            {
                first=mid;
                e=mid-1;
            }
            else if(arr[mid]>0)
            {
                s=mid+1;
            }
            else
            e=mid-1;
        }
        
         s=0;
         e=n-1;
        int second=-1;
        while(s<=e)
        {
            int mid=s+((e-s)/2);
            if(arr[mid]==0)
            {
                second=mid;
                s=mid+1;
            }
            else if(arr[mid]>0)
            {
                s=mid+1;
            }
            else
            e=mid-1;
        }
        return (second-first)+1;
    }
};

    int main() {
    int arr[] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Solution solution;
    int count = solution.countZeroes(arr, n);
    
    cout << "Count of 0s: " << count << endl;  // This should print "Count of 0s: 5"
    
    return 0;
}


