#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, b, h;

    cin >> l >> b >> h;
    
//Allocate memory
    int ***ptr = new int **[l];

    for (int i = 0; i < l; i++)
    {
        ptr[i] = new int *[b];

        for (int j = 0; j < b; j++)
        {
            ptr[i][j] = new int[h];
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < h; k++)
            {
                ptr[i][j][k] = i + j + k;
            }
        }
    }
    //print array
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < h; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

//Deallocate memory
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}