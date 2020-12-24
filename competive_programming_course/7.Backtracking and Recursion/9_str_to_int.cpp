#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

// backtracking and recursion example
int stringtoint(string s, int n)
{
	if (n == 0)
		return 0;

	int ans = int(s[n - 1]) * 10 + stringtoint(s, n - 1);
	cout << "ans=" << ans << " n=" << n << endl;
	return ans;
}

int main()
{
	string s;
	cin >> s;
	/*
	// Inbuilt function
	// stoi
	// Syntax :
	// int stoi(string s)
	// Returns the integer(base10) conversion of given string

	// cout << stoi(s) << endl; // inbuilt function
	int ans = stoi(s);
	cout << ans << endl;

	*/
	// cot << s << " " << s.length() << endl;u
	cout << stringtoint(s, s.length()) << endl;
	return 0;
}