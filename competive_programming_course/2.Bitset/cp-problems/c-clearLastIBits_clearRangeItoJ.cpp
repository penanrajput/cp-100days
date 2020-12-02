#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// clearLastIBits
// clearRangeItoJ



int  clearLastIBits(int n, int i)
{
// 			00000101
// 			11111011
// 			--------
// 	(AND)	00000001

	int mask =  (~1 << i);
	int ans = n & mask;
	return ans;
}


int clearRangeItoJ(int n, int i, int j) {
	// cout << bitset<8>(n) << endl;

	/*
		// First Approach
		int diff = j - i;
		int ones = ~0; // 11111111 ( all ones)
		ones = ones << diff; //1...1000 ( at rightmost)
		ones = ~ones ; // 0....0111
		ones = ones << i; // 0...011100
		ones = ~ones; // 1...100011
		int mask = ones;
		int ans = n & mask;

	*/

	/*
	// Second Method (My method)
	int diff = j - i;
	int ones = ~0;
	int a = ( 1 << diff) - 1;
	int b = a << i;
	int mask = ~b;
	int ans = n & mask;
	*/
	// Third Method
	int ones = ~0;
	int a = ones << j;
	int b = (1 << i) - 1;
	int mask = a | b;
	int ans = n & mask;



	// cout << bitset<8> (ones) << endl;
	// cout << bitset<8>(ans) << endl;

	return ans;

}

int main()
{
/*
		// clearlastIBits
		int n = 15;

		cout << bitset<8> (n) << endl;

		n = clearLastIBits(n, 2);
		// cout << "after removing 2 th bit" << endl;
		cout << bitset<8>(n) << endl;
	*/


	// clearRangeItoJ
	int n = 255;
	cout << bitset<8>(n) << endl;
	n = clearRangeItoJ(n, 2, 5); // (2-3-4), 5 = excluded
	n = clearRangeItoJ(n, 2, 5 + 1); // 2-3-4-5, 5 included
	cout << bitset<8>(n) << endl;



}
