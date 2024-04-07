#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int rem,sum=0;
    int temp=n;
	int count=0;
	if(n==1)
	{
		return 1;
	}
	  while (temp != 0) {
        temp /= 10;
        count++;
    }
    cout<<count;
return 0;
}
