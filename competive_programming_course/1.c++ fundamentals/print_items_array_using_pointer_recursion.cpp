/*
Author : Penan Rajput
© Copyright 2020
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Problem Statement : Printing the array recursively
// input : array
// output : printing the items of array

// this recursion is important
// to remember
void method(int *a, int n)
{
	if (n == 1)
		return;

	cout << "a[0] " << a[0] << ", a[1] " << a[1] << endl;
	method(a + 1, n - 1);
}

// you can understand "method" using this below code
// becoz we are not accessing "a" with "n"
// so its good to learn
void method2(int *a, int n)
{
	if (n == 0)
		return;

	cout << "a[0] " << a[0] << ", n " << n << endl;
	method2(a + 1, n - 1);
}

void solve()
{

	/*
	int a[] = {4, 3, 6, 4, 8};
	int n = 5;
	int m = 5;

	int * ptr = a;

	cout << a[0] << " " ; // 4
	cout << a[1] << " " ; // 3
	cout << a[2] << " " ; // 6
	cout << a[3] << " " ; // 4
	cout << a[4] << " " ; // 8

	cout << a[5] << " " ; // memory

	*/

	/*
	// changing the pointer
	int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *ptr = &b[5];
	int *axe = &b[5];
	cout << ptr [0] << " " << *(axe) << endl;
	cout << ptr [1] << " " << *(axe + 1) << endl;
	cout << ptr [2] << " " << *(axe + 2) << endl;
	*/

	int c[] = {1, 2, 6, 5, 7};
	int n = sizeof(c) / sizeof(c[0]);
	method2(c, n);
}

int main()
{
	solve();
}
