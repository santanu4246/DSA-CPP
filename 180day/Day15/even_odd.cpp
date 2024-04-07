#include <bits/stdc++.h>
using namespace std;

void evenOdd(int n)
{
    int i = 1;
    bool evenFound = false;
    bool oddFound = false;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << "Even number: " << i << endl;
            evenFound = true;
        }
        else
        {
            cout << "Odd number: " << i << endl;
            oddFound = true;
        }
        i++;
    }

    if (!evenFound)
    {
        cout << "No even numbers found." << endl;
    }

    if (!oddFound)
    {
        cout << "No odd numbers found." << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    evenOdd(n);
    return 0;
}
