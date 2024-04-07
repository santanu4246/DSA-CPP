#include<bits/stdc++.h>
using namespace std;
  int binaryDecimal(int decimal)
  {
    int rem,ans=0,base=1;
    while(decimal>0){
    rem=decimal%10;
    decimal/=10;
    ans=rem*base+ans;
    base*=2;
    }
    return ans;
  }

int decimalOctal(int octal)
{
      int rem,ans=0,base=1;
      while(octal>0)
      {
        rem=octal%8;
        octal/=8;
        ans=rem*base+ans;
        base*=10;
      }
      return ans;
}
int main()
{
    int n;
    cin>>n;
    int binary=binaryDecimal(n);
    int octal=decimalOctal(binary);
    cout<<octal;

}