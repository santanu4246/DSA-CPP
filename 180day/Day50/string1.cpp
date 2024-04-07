#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //reverse the string
    int s1=0;
    int e=s.size()-1;
    while(s1<=e)
    {
        swap(s[s1],s[e]);
        s1++;
        e--;
    }
    cout<<s<<endl;
    //size of string
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<size<<endl;
    //palindrome string
//bool f=1;
    s1=0;
    e=s.size()-1;
    while(s1<e)
    {
        if(s[s1]!=s[e])
        {
            
            cout<<"Not a palindrome";
            return;
        }
        s1++;
        e--;
    }
    //if(f)
    cout<<"It is a palindrome";
    // else
    // cout<<"Not a palindrome";

return 0;
}
