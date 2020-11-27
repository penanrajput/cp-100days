
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


int main()
{
// Observation 1
	// Rules to remember :
	// save it
	// n = n << 1, makes difference
	// n << 1, doesn't make it differece

	// Program 1 (doesn_t make it difference)
	// int n = 15; /// 1111
	// cout << n << endl;
	// n << 2 ;
	// cout << n << endl; // 1111

	// Program 2 (makes difference)
	// int n = 15; /// 1111
	// cout << n << endl;
	// n = n << 2 ;
	// cout << n << endl; // 1111

// Observation 2
	// ~0 = 1....1
	// ~1 = 1...10

	// cout << bitset<8>(~0) << endl;
	// cout << bitset<8>(~1) << endl;

// Observation 3
	// 1<<8  is same as 2^8 = 256

	// int n = 1 << 6;
	// cout << n << endl;

// Observation 4
	// make use of micros to print in Binary
	// cout << BIN8(n) << endl;
	// cout << BIN(n, 10) << endl;

// Observation 5
	// want to know last_bit
	// use last_bit = n & 1
	// int n = 5;
	// int last_bit =  n & 1;
	// cout << last_bit << endl;

	// want to know last 3 bit
	// mask =  0...0111
	int n = 29;
	cout << BIN8(n) << endl;
	int mask = ~(~0 << 3);
	cout << BIN8(mask) << endl;

	int ans = mask & n;
	cout << BIN8(ans) << endl;



}