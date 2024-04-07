#include<bits/stdc++.h>
using namespace std;
char convertTolower(char &name)
{
    char ans;
    ans=name-'A'+'a';
    return ans;
}
char convertToupper(char &name)
{
    char ans;
    ans=name-'a'+'A';
    return ans;
}
int main()
{
    char name;
    cin>>name;
  
  if('a'<=name&&name<='z')
  {
    convertToupper(name);
    cout<<"Your Capital latter:"<<convertToupper(name);
  }
 else if('A'<=name&&name<='Z')
  {
    convertToupper(name);
    cout<<"Your Small latter:"<<convertTolower(name);
  }
else
cout<<"Invalid input,please enter A-Z to convert lowecase or please enter a-z to convert uppercase";
return 0;
}