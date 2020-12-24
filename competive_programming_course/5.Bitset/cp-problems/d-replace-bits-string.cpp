// You are given tvo 32—bit numbers, N adn M, and two are bit positions, iand j.
// Write a method to set all bits between i and j in N equal
// to M (e.g., M becomes a substring of N located at i and starting at j)

// EXAMPLE:
// Input : N = 1000000000000,
// M = 10101, i = 2, j = 6
// Output: N = 10001010100


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int clearRangeItoJ(int n, int i, int j) {
	// Third Method
	int ones = ~0;
	int a = ones << j;
	int b = (1 << i) - 1;
	int mask = a | b;
	int ans = n & mask;
	return ans;
}

int replaceBits(int n, int m, int i, int j)
{
	int n_ = clearRangeItoJ(n, i, j + 1);
	m = m << i;
	int ans = n_ | m;
	return ans;
}

int main() {

	int n, i, j, m;
	// cin	>> n;
	// cin >> i;
	// cin >> j;
	// cin >> m;
	n = 15, i = 1, j = 3, m = 2;

	cout << bitset<8>(n) << endl;

	n = replaceBits(n, m, i, j );
	cout <<  n << endl;


	cout << bitset<8>(n) << endl;




}