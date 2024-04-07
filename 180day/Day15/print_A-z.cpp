#include<bits/stdc++.h>
using namespace std;
void print(char &name)
{
    char uppercase=name;
    while(uppercase<=name)
    {
        cout<<name;
        if(name=='Z')
        break;
          name++;
    }
}
void lowercase(char &name)
{
    char uppercase=name;
    while(uppercase<=name)
    {
        
      
        cout<<name;
        if(name=='z')
        break;
          name++;
    }
}
int main()
{
    char name;
    cin>>name;
    char lower;
    cin>>lower;
    print(name);
    cout<<endl;
    lowercase(lower);
return 0;
}