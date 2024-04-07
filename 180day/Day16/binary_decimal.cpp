#include <iostream>
using namespace std;

int main()
{
    int n, rem, ans = 0, mul = 1;

    cout << "Enter a binary number: ";
    cin >> n;

    // Input validation to check if the number is binary
    int temp = n;
    bool isBinary = true;
    while (temp != 0)
    {
        rem = temp % 10;
        if (rem != 0 && rem != 1)
        {
            isBinary = false;
            break;
        }
        temp /= 10;
    }

    if (isBinary==false)
    {
        cout << "Please enter a binary number." << endl;
        return 1; // Exit the program with an error code
    }

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        ans += rem * mul;
        mul *= 2;
    }

    cout << "Decimal equivalent: " << ans << endl;

    return 0;
}
