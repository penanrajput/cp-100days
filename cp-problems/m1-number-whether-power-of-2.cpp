/*
Author : Penan Rajput
© Copyright 2020
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n,k) bitset<k>(n)


/*
Input : n = 4
Output : Yes
22 = 4

Input : n = 7
Output : No

Input : n = 32
Output : Yes
25 = 32

Time Complexity : 0(1) best solution
*/

/*
0 is not power of 2
*/
bool isPowerOfTwo(int n)
{
	// log2  gives integer if power of 2
	// log2  gives fraction if not power of 2
	// floor gives closest lower value
	// ceil  gives closest upper value

	/*
	// logic 1
	if (ceil(log2(n)) == floor(log2(n)))
		return true;
	return false;
	*/

	// logic 2
	if (n == 0) return false;
	return ceil(log2(n)) == floor(log2(n));
}

// Solution : 0(1)
bool isPowerOfTwoFast(int n)
{
	//   n = 4 = 100
	// n-1 = 3 = 011
	// &   =   = 000
	// if n is power of 2, then n&(n-1) becomes 0

	//   n = 3 = 11
	// n-1 = 2 = 10
	// &   =   = 10
	// as n is not power of 2, then n&(n-1) is not 0

	if (n == 0) return false;
	return (n & (n - 1)) == 0;
}

// Solution : 0(log(n))
bool isPowerOfTwoSlow(int n)
{

	if (n == 0) return false;
	while (n != 1) {
		cout << " n=" << n << endl;
		if (n % 2 == 0 )	return true;
		n = n % 2;
	}

	return false;
}

bool isPowerOfTwoCountBitSet(int n)
{

}

int main() {

	int n ;

	// code for isPowerOfTwo
	// n = 63;
	// isPowerOfTwo(n) ? cout << "yes" << endl : cout << "No" << endl;
	// n = 128;
	// isPowerOfTwo(n) ? cout << "yes" << endl : cout << "No" << endl;

	// code for isPowerOfTwoFast
	// n = 63;
	// isPowerOfTwoFast(n) ? cout << "yes" << endl : cout << "No" << endl;
	// n = 128;
	// isPowerOfTwoFast(n) ? cout << "yes" << endl : cout << "No" << endl;

	// cin >> n;
	// isPowerOfTwoSlow(n) ? cout << "yes" << endl : cout << "No" << endl;

	cin >> n;
	isPowerOfTwoCountBitSet(n) ? cout << "yes" << endl : cout << "No" << endl;;



}
