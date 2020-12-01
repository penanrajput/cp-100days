#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// this is my logic
// int countSetBits(int n)
// {
// 	int ans = 0 ;
// 	while (n > 0)
// 	{
// 		if (n & 1 == 1 )
// 		{
// 			ans += 1;
// 		}
// 		n = n >> 1;
// 	}
// 	return ans;
// }


// this logic more clearer
int countSetBits(int n)
{
	int ans = 0 ;
	while (n > 0)
	{
		ans += n & 1;
		n = n >> 1;
	}
	// int ans = 0;
	// for (; n > 0; n >> 1)
	// {
	// 	ans += n & 1;
	// }
	return ans;
}

// Second Method
int countSetBitsFast(int n)
{
	// it tuns for only O(number of setbits)
	// if set bits are 5, n = 100000110000001000010000
	// it will run for only 5 times becoz only 5 1's are there

	// Process
	//  5   =  101
	//  4   =  100
	int ans = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		ans ++;
	}
	return ans;
}

int main() {

	int n = 13; // 1 1 0 1
	n = 15; // 1 1 1 1
	cout << countSetBits(n) << endl;
	cout << countSetBitsFast(n) << endl;
	// Third Method
	cout << __builtin_popcount(n) << endl;
}
