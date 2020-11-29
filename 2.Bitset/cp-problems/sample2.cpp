/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define BIT8(n) bitset<8>(n)

// Count the number of bits
// we are given an array
// every number in representation of binary format
// count the number of 0's in all the digits of array
// Solution
// for every number, count all the 0's and 1's and
// and substract the number of 1's
// Example
// 8 = 1000 ans = 4 - 1 = 3
// 7 = 111 ans = 3 - 3 = 0

ll count(ll n)//to count number of zeroes in n
{
	ll k = n;
	ll p = __builtin_popcount(n);
	ll ans = 0;
	// cout << BIT8(n) << endl;

	ans = floor(log2(k)) + 1 - p;
	return ans;
}


int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		ll n, cnt = 0;
		ll num;
		cin >> n;

		for (ll i = 0; i < n; i++)
		{
			cin >> num;
			cnt += count(num);
		}
		cout << cnt << endl;

	}
}
