#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

// Parity of a number refers to whether it contains an odd or even number of 1-bits. The number has “odd parity”, if it contains odd number of 1-bits and is “even parity” if it contains even number of 1-bits.

// Definations
// odd parity = odd number of 1s in binary format
// even parity = even number of 1s in binary format

// output: 1 if odd parity
// 		0 if even parity

// Check every bit of number
ll parity(ll a)
{
	ll ans = 0;
	while (a)
	{
		// cout << "executed " << BIT8(a) << endl;
		ans ^= a % 2;
		a = a >> 1;
	}
	return ans;
}
/*
// a = a & a - 1
//  removes 1 set bit per one execution


// O(no of setBits)
// n = 200
// 11001000
// executed 11001000
// executed 11000000
// executed 10000000
// Only 3 times execution
*/

ll parityFast(ll a)
{
	ll ans = 0;
	while (a)
	{
		cout << "executed " << BIT8(a) << endl;
		ans ^= 1;
		a = a & a - 1;
	}
	return ans;
}

int main()
{
	// ll a;
	// cin >> a;
	// for (int i = 0; i <= 12; i++)
	// {
	// 	cout << BIT8(i) << " " << parity(i) << endl;
	// }
	// if (parity(a)) // if parity is 0
	// 	cout << "parity" << endl;
	// else // if parity is 1
	// 	cout << " not parity" << endl;
	// int n = 200;
	for (int n = 0; n < 50; n++)
	{
		cout << n << " " << BIT8(n) << " "
			 << parityFast(n) << endl;
	}
	return 0;
}