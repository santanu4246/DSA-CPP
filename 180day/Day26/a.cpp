// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=32;
//     bool flag=true;
//     while(n!=1)
//     {
//         if(n%2==1)
//         {
//             cout<<"no";
//             flag=false;
//         }
//         n=n/2;
//     }
//     if(flag)
//     cout<<"yes";
// return 0;
// }

//HCF

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=10,b=15;
//     int c=max(a,b);
//     for(int i=2;i<c/2;i++)
//     {
//         if(b%i==0&&a%i==0)
//         {
//             cout<<i;
//         }
//     }
// return 0;
// }

//lCM
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=15,b=10;
int num1=a;
int num2=b;
while(b!=0)
{
    int temp=b;
    b=a%b;
    a=temp;
}
cout<<a<<endl;
cout<<(num1*num2)/a;

return 0;
}