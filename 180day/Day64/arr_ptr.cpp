#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    int a = 10;
    int *ptr1 = &a;
    cout<<*ptr1<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<arr+0<<endl;

    // //print address of second element or 1 index
    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;

    // //print value
    // cout<<arr[0]<<endl;
    // cout<<*(arr+0)<<endl;

    // //print all value
    // for(int i = 0; i < 5; i++)
    // {
    //     cout<<arr+i<<endl;
    // }
    // //print all address
    // for(int i = 0; i < 5; i++)
    // {
    //     cout<<*(arr+i)<<endl;
    //}

    //print all the value

    for(int i = 0; i < 5; i++)
    {
        cout<<ptr[i]<<endl;
    }
    //print all the address
    for(int i = 0; i < 5; i++)
    {
        cout<<(ptr+i)<<endl;
    }
    //print all the value
    for(int i = 0; i < 5; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

    
    return 0;
}