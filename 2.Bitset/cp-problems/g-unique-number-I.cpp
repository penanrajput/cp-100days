#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Unique Number 1
int main() {

	int n;
	cin	>> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res = res ^ arr[i];
	}
	cout << res;

}