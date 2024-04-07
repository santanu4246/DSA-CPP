// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int *ptr = new int;
//     *ptr = 5;//value assign

//     cout<<*ptr<<endl;

//     float *ptr2 = new float;
//     *ptr2 = 4.5;
//     cout<< *ptr2<<endl;

// int n;
// cout<<"Enter the size of array:";
// cin>>n;

// int *arr = new int[n];

// //input
// for(int i = 0; i <n; i++)
// cin>>arr[i];

// //print
// for(int i = 0; i <n; i++)
// cout<<arr[i];

// delete[] arr;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "abBAcC";
    str.erase(1,3);
    cout<<str;
    return 0;
}