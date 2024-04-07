#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name;
    cin>>name;
    switch (name)
    {
    case 'a':
    case 'A':
       cout<<"vowel";
        break;

    case 'u':
    case 'U':
       cout<<"vowel";
        break;
    
    case 'e':
    case 'E':
       cout<<"vowel";
        break;
    
    case 'i':
    case 'I':
       cout<<"vowel";
        break;
    
    case 'o':
    case 'O':
       cout<<name<<" is vowel";
        break;
    
    default:
    cout<<name<<" is Consonant";
        break;
    }
return 0;
}