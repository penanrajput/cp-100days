#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {


	int n;
	cin >> n;
	int arr [n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "reversing :" << endl;
	for (int i = 0; i < n / 2; i++) {
		// swap i, n-1,
		// swap 0, 9 // n= 10

		int index = (n - 1) - i;
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}





}
