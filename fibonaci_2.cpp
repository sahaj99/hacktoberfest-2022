// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Function to return the nth Fibonacci number
int fib(int n)
{
	double phi = (1 + sqrt(5)) / 2;
	return round(pow(phi, n) / sqrt(5));
}

// Function to return the required sum
ll calculateSum(int l, int r)
{

	// To store the sum
	ll sum = 0;

	// Calculate the sum
	for (int i = l; i <= r; i++)
		sum += fib(i);

	return sum;
}

// Driver code
int main()
{
	int l = 4, r = 8;
	cout << calculateSum(l, r);

	return 0;
}
