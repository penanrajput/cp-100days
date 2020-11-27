/*
Author : Penan Rajput
© Copyright 2020
*/
// Finding Subsequences/ Subsets of Given a String
// 1 hour 49 minutes

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define BIN8(n) bitset<8>(n)
#define ll long long

ll findPower(ll n, ll p) {
	// findPower(3, 5)
	// logic : 3*3*3*3*3
	// o(N)

	// cout << n << " " << p << endl;
	ll res = 1;
	while (p--)
	{
		res *= n;
	}
	return res;
}

ll power_optimized(ll n, ll p) {
	// power_optimized(3, 5)
	// 3^(5) = 3^(101),  5 = 101
	// O(logN)

	ll res = 1;
	ll a = n;
	while (p > 0)
	{
		// cout << "a=" << a << " n=" << BIN8(n) << " res=" << res << " p=" << p << endl;

		int last_bit = p & 1;
		if (last_bit)
		{
			res =  res * a;
		}
		a = a * a;
		p = p >> 1;

	}
	return res;
}

int main() {
	// Task : n^p
	// 3 ^ 5 = 3*3*3*3*3 = 243
	ll n = 3;
	ll p = 5;
	cout << findPower(n, p) << endl;
	cout << power_optimized(n, p) << endl;
	cout << power_optimized(9, 8) << endl;
}
