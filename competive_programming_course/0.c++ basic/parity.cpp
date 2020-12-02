#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n,k) bitset<k>(n)
#define ll long long

ll parity(ll a)
{
	ll ans = 0;
	while (a)
	{
		cout << "executed " << BIT8(a) <<  endl;
		ans ^= a % 2;
		a = a >> 1;
	}
	return ans;
}

ll parityFast(ll a)
{
	ll ans = 0;
	while (a)
	{
		cout << "executed " << BIT8(a) <<  endl;
		ans ^= 1;
		a = a & a - 1;
	}
	return ans;
}

int main() {
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
	int n = 200;

	cout << BIT8(n) << " \n\n" << parityFast(n) << endl;
	return 0;
}