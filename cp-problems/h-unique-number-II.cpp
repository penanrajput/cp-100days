#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Unique Number 2
// Finding Two unique number from array
// Input : [1, 2, 3, 6, 3, 2, 4, 1]
// Output : 4, 6
// Output Format : smaller unique number first, then larger unique number


int findIndexOfFirstSetBit(int n)
{
	// cout << n << " " << bitset<8> (n) << endl;

	int ans = 0;
	while ((n & 1) == 0)
	{
		n = n >> 1;
		ans += 1;
	}
	return ans;
}

int main() {

	/*
		int n;
		cin	>> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
	*/
	int n = 8;
	int arr[] = {1, 2, 3, 6, 3, 2, 4, 1};
	int res = 0;
	for (int i = 0; i < n; i++) {
		res = res ^ arr[i]; // x ^ y
	}


	int x = 0, y = 0;
	int index = findIndexOfFirstSetBit(res);
	// cout << "First Index : " << index << endl;
	int mask = 1 << index;
	for (int i = 0; i < n; i++) {
		if ((arr[i] & mask ) > 0)
			x = x ^ arr[i];
	}
	y = x ^ res;
	cout << min(x, y) << " " << max(x, y) << endl;



}