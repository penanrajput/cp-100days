#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

// index of LSB
// count no of Set Bits

// 52 = 00110100
// index of LSB = 2 00110(1)00
// count no of set Bits = 3 = no of all 1's are 3 
// 



// get index of Least Set Bit
// 52 = 00110100
// index = 2 (index is 2 of setbit)
int indexofLSB(int n)
{
	int index = 0;
	while ((n & 1) == 0)
	{
		++index;
		n = n >> 1;
	}
	return index;
}

/*
		// Propagate LSB till last bit
		// Ex. 64 = 01000000
		// output = 01111111
		// ex.    = 10100
		// output = 10111

		// how to do it  (ex 64 = 01000000)
		// get index of least set bit (index = 6)
		// 1 << index => 1000000
		// mask = (1 << index ) - 1 => 0111111
		//  or operation
		// n = n | mask
		// n = 01111111


		// how to do it  ( = 01001000)
		// get index of least set bit (index = 3)
		// 1 << index => 00001000
		// mask = (1 << index ) - 1 => 00000111
		//  or operation
		// n = n | mask
		// n = 01001111

		//


	n = 64;
	ans  = propagateLSB(n);
	cout << BIT8(n) << endl << BIT8(ans) << endl << endl;

	n = 52;
	ans  = propagateLSB(n);
	cout << BIT8(n) << endl << BIT8(ans) << endl << endl;
	*/
int propagateLSB(int n)
{
	int index = indexofLSB(n);
	int mask = (1 << index) - 1;
	return n | mask;
}

int main()
{
	int n = 64;
	int ans;
	int index = indexofLSB(n);
	return 0;
}