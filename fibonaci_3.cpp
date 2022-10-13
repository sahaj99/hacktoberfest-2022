// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the nth Fibonacci number
int fib(int n)
{
	double phi = (1 + sqrt(5)) / 2;
	return round(pow(phi, n) / sqrt(5));
}

// Function to return the required sum
int calculateSum(int l, int r)
{

	// Using our deduced result
	int sum = fib(r + 2) - fib(l + 1);
	return sum;
}

// Driver code
int main()
{
	int l = 4, r = 8;
	cout << calculateSum(l, r);

	return 0;
}
