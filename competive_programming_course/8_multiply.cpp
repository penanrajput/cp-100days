#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n,k) bitset<k>(n)
#define ll long long

int multiply(int a, int b)
{
	if (b == 0) return 0;
	return a + multiply(a, b - 1);

}


int main() {
	int a, b;
	cin >> a >> b;
	cout << multiply(a, b) << endl;
	return 0;
}