#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter row size:";
    cin>>n;
    cout<<"Enter column size:";
    cin>>m;

    vector<vector<int> >matrix(n,vector<int>(m));
    // int row=matrix.size();
      // int col=matrix[0].size();
    cout<<"Enter element of vector:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}