/*
Author : Penan Rajput
© Copyright 2020
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// want n in 8bit binary
// usange : only to cout
#define BIN8(n) bitset<8>(n)

// want n in 16bit binary
// usange : only to cout
#define BIN16(n) bitset<16>(n)

// want n in k bits binary
// usange : only to cout
#define BIN(n,k) bitset<k>(n)



// Input  : "abc"
// Output : "", "a", "b", "c", "ab", "bc", "ac", "abc"

void printChars(int n, char a[]) {
	// cout << " n=" << n << endl;
	for (int i = 0; n > 0; i++) {
		int last_bit = n & 1;
		if (last_bit)
			cout << a[i];
		n = n >> 1;
	}
	cout << endl;
}

void printSubsets(char a[]) {
	int n = strlen(a); // "abc" 3
	n = 1 << n; // 1<<3 = 8
	for (int i = 0; i < n; i++)
	{
		printChars(i, a);

	}
}

int main() {
	char a[100];
	cin >> a;
	printSubsets(a);
}
