#include <iostream>
using namespace std;


int add(int a, int b)
{
return (a + b);
}

int add(double a, double b)
{
	return (a + b);
}

// Driver code
int main()
{
	cout<<add(10, 2);
	cout<<add(5.3, 6.2);

	return 0;
}
