/*
Author : Penan Rajput
© Copyright 2020
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

/* VOID POINTER */
// The void pointer, also known as the generic pointer, is a special type of pointer that can be pointed at objects of any data type! A void pointer is declared like a normal pointer, using the void keyword as the pointer's type.
// Void pointer is used to store the address of another datatype

struct Emp
{
	int no;
	string str;
};

void solve()
{

	// void pointer
	void *ptr;
	int n = 10;
	ptr = &n;
	cout << ptr << endl; // valid
	cout << &n << endl;	 // obciously valid
						 // cout << &ptr << endl; // valid
						 // cout << ptr* << endl; // invalid

	/*
	// integer pointer
	int * iptr; // integer pointer
	int n = 10;
	iptr = &n;
	cout << iptr << endl;
	cout << *iptr << endl;

	*/

	/*
	// cast void pointer into integer pointer
	// int n = 20;
	// void * vptr = &n;
	// int *iptr = static_cast<int*> (vptr);
	// cout << iptr << endl;
	// cout << *iptr << endl;

	int arr [] = {400 , 500 , 600, 700};
	int *ptr = arr;
	for (int i = 0; i < 4; i++)
	{
	cout << *(ptr++) << endl;
	}

	ptr = arr;
	for (int i = 0; i < 4; i++)
	{
	cout << (*ptr)++ << endl;
	}
	*/
}

int main()
{
	// int tc;
	// cin >> tc;
	// FOR(i, 1, tc, 1)
	solve();
}