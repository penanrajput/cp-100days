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

// Checking whether array is sorted, ascending, method using recursion

// input : {1 3 5 6 7 9}
// output : sorted

// input : {1, 2, 3, 4, 5, 3}
// output : not sorted

int sort(int index, int arr[])
{
	// cout << "index=" << index << endl;
	if (index == 0)
	{
		return 1;
	}
	else if (arr[index] < arr[index - 1])
	{
		return 0;
	}
	return sort(index - 1, arr);

}

bool sortFast(int i, int arr[])
{
	if (i == 0) return true;
	return (arr[i - 1] < arr[i]) && (sort(i - 1, arr));
}

bool sortFast2(int *a, int n)
{
	if (n == 1) return true;
	if (a[0] < a[1] && sortFast2(a + 1, n - 1))
		return true;
	return false;

}

bool  sortedArray(int n, int arr[] )
{
	// if (n == 0) return true;
	// return sort(n - 1, arr);
	bool sol =  sortFast(n - 1, arr);
	return sol;
}


void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n ; i++)
	{
		cin >> arr[i];
	}
	int *ptr = arr;
	// for (int i = 0; i < n ; i++, ptr++)
	// {
	// 	cout << *ptr << " " ;
	// cout << (sortedArray(n, arr) ? "Sorted" : "Not sorted");
	// }
	bool ans = sortFast2(arr, n);
	if (ans)
		cout << "Sorted";
	else
		cout << "not sorted";

}

int main() {
	// int tc;
	// cin >> tc;
	// FOR(i, 1, tc, 1)
	solve();


}
