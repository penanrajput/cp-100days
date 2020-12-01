/*
Author : Penan Rajput
© Copyright 2020
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n,k) bitset<k>(n)
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
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
	void* ptr;
	int n = 10;
	ptr = &n;
	cout << ptr << endl; // valid
	cout << & n << endl; // obciously valid
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

int main() {
	// int tc;
	// cin >> tc;
	// FOR(i, 1, tc, 1)
	solve();


}