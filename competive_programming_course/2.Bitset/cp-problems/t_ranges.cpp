#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT32(n) bitset<32>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

int main()
{
	// int 4 byte = 32 bits
	// int n = 1 << 31;
	// cout << n << " " << BIT32(n) << endl;

	// int max2 = numeric_limits<int>::max();
	// cout << max2 << " " << BIT32(max2) << endl;

	// cout << "log2(int) " << log2(8 * 8) << endl;

	// cout << stoi("32766", 0, 2) << endl;

	//short
	cout << BIT16(32767) << endl; // 0111 1111 1111 1111 //
	cout << BIT16(65535) << endl; // 1111 1111 1111 1111

	// long long int
	cout << log2(4294967295) << endl; // 32
}