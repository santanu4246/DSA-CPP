#include <bits/stdc++.h>
using namespace std;
// void fun3(int n)
// {
//     if (n == 0)
//     {
//         cout << "Happy Birthday\n";
//         return;
//     }
//     cout << n << " days left for birthday\n";
//     fun3(n - 1);
// }

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n << endl;
}
void even(int n)
{
    if (n <= 0)
    {
        return;
    }
    even(n - 2);
    cout << n << endl;
}
int main()
{

    // int n = 5;

    // for(int i = n-1; i>=0; i--)
    // {
    //     cout<<i<<" Days left for birthday"<<endl;
    // }
    // cout<<"Happy Birthday";
    // fun3(5);
    print(10);
    cout << "Even Numbers" << endl;
    even(10);
    return 0;
}