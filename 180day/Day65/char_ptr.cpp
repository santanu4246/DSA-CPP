#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[5]={'1','2','3','4','5'};

    char *ptr = arr;
    cout<<static_cast<void*>(arr)<<endl;
    cout<<(void*) arr<<endl;
    cout<<arr<<endl;
    cout<<ptr;
    return 0;
}