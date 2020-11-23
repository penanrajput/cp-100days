#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isOdd(int a)
{
	return a & 1;
}
int getBit(int n, int i)
{
	int mask = 1 << i;
	return (n & mask > 0 ? 1 : 0);
}

void setBit(int &n, int i)
{
	int mask =  (1 << i);
	n = n | mask;

	// 00000001
	// 00000100
	// ---------- -
	// (OR)00000101

}
void clearBit(int & n, int i)
{
// 			00000101
// 			11111011
// 			--------
// 	(AND)	00000001

	int mask =  ~(1 << i);
	n = n & mask;


}
void updateBit(int &n, int i, int v)
{
	/*
	Update the number n
	i: 0 or 1
	Index : v (starting from right : 0 )
	*/
	int mask = i << v;
	cout << " mask = " << bitset<8>(mask) << endl;
	n = n | mask;
}

int main() {
	/*
	// ODD EVEN
		// cout<<isOdd(6)<<endl;
		// cout<<isOdd(5)<<endl;
	*/

	// cout << bitset<8> (5);


	// cout << getBit(5, 2) << endl; // 5 101

	// int n = 5;
	// setBit(n, 4);

	// bitset<8> bin(n);
	// cout << bin << endl;


	/*
		int n = 5;
		bitset<8> bin(n);
		cout << bin << endl;

		clearBit(n, 2);
		cout << "after removing 2 th bit" << endl;
		cout << bitset<8>(n) << endl;

	*/
	/*

		int n = 5;
		updateBit(n, 0, 3);
		cout << bitset<8>(n) << endl;

		int m = 5;
		updateBit(m, 1, 3);
		cout << bitset<8>(m) << endl;

		int k = 5;
		updateBit(k, 1, 5);
		cout << bitset<8>(k) << endl;

	*/
	int l = 5;
	updateBit(l, 1, 4);
	cout << bitset<8>(l) << endl;





}
