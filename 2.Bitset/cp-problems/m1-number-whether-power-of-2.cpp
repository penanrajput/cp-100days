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
must return false;
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

/*
// Solution : 0(1)
// this solutions, doesn't work with n=0
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
*/

// Solution : 0(1)
// this solutions, works with n=0
bool isPowerOfTwoFast(int n)
{
	// 0 = 0000
	//-1 = 1111
	// & = 0000
	// 0 = 0000
	// & = 0000, false

	// 5 = 0101
	// 4 = 0100
	// & = 0100
	// 5 = 0101
	// & = 0100, false

	// 8 = 1000
	// 7 = 0111
	// & = 0000
	// 8 = 1000
	// & = 0000, true

	return (n & (n & (n - 1))) == 0;
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

// predefined
int countSetBitsFast(int n)
{
	int ans = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		ans ++;
	}
	return ans;
}

// O(log(n))
bool isPowerOfTwoCountBitSet(int n)
{

	// n = 64 , 100000000
	// n = 4, 100
	// n = 3, 011
	// for number if power of 2, set bit will be 1
	// for number if not power of 2, set bit will not be 1

	return countSetBitsFast(n) == 1;
}


void solve()
{
	int n;
	cin >> n;

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

	// isPowerOfTwoCountBitSet(n) ? cout << "yes" << endl : cout << "No" << endl;

	isPowerOfTwoFast(n) ? cout << "yes" << endl : cout << "No" << endl;;

}

int main() {

	int n ;



	int tc;
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		solve();
	}





}
