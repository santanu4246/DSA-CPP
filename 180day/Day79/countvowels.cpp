#include<bits/stdc++.h>
using namespace std;
int countVowel(string s,int index)
{
    if(index == -1)
    return 0;

  if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u') {
     return 1 + countVowel(s,index-1);
}
else
 return countVowel(s,index-1);
}
int main(){
    string name = "santnau";
    cout<<countVowel(name,name.size()-1);
    return 0;
}