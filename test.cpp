#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

template <class T>
void print(vector<vector<T>> v)
{
	for (vector<T> a : v)
	{
		for (T element : a)
			cout << element << ", ";
		cout << endl;
	}
}

int main()
{
	// vector<vector<int>> v;
	// v.push_back(vector<int>{10, 20, 30});
	// v.push_back(vector<int>{40, 50, 60});
	// v.push_back(vector<int>{18, 22, 10});
	// vector<int> k;
	// k.push_back(50);
	// v.push_back(k);

	vector<vector<string>> v;
	v.push_back(vector<string>{"10", "20", "30"});
	v.push_back(vector<string>{"40", "50", "60"});
	v.push_back(vector<string>{"18", "22", "10"});
	vector<string> k;
	k.push_back("50");
	v.push_back(k);

	print(v);
}