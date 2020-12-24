
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Input : 10
Output : 8
Binary representation of 10 is 1010
The most significant bit corresponds
to decimal number 8.

Input : 18
Output : 16
*/

int findMSB(int n)
{
	if (n == 0)
		return 0;
	int count = 0;
	n = n / 2;
	while (n != 0)
	{
		count++;
		n = n / 2;
	}
	return 1 << count;
}

int findMSBFast(int n)
{

	// cout << "  n           	       = " << n << endl;
	// cout << "  log2(n)             = " << log(n) << endl;
	// cout << "  int(log2(n))        = " << int(log2(n)) << endl;

	if (n <= 0)
		return 0;
	return 1 << int(floor((log2(n))));

	// same :
	// int k = (int)(log2(n));
	// return (int)(pow(2, k));
}

void solve()
{
	int n;
	cin >> n;
	cout << findMSBFast(n) << endl;
}
int main()
{
	int tc, i;
	cin >> tc;
	FOR(i, 0, tc, 1)
	solve();
}