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

//fibonaaci series
// 0, 1, 1, 2, 3, 5, 8, 13, ...

// simple recursive solution
int fib(int n)
{
	if (n < 0) return 0;
	else if (n == 0 || n == 1) return n;
	else
	{
		int sol1 = fib(n - 1);
		int sol2 = fib(n - 2);
		return sol1 + sol2;
	}
}

// less code
int fibShort(int n)
{
	if (n < 0) return 0;
	else if (n == 0 & n == 1) return n;
	else
		return (fib(n - 1) + fib(n - 2));
}

// DP
int fibDP(int n)
{
	int  arr [2 + n];
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	return arr[n];
}

void solve()
{
// 	int n ;
// 	cin >> n;
	FOR(i, 0, 6, 1)
	{
		cout << fib(i) << " " << fibShort(i) << " " << fibDP(i) << endl;
	}

}


int main() {
	// int tc;
	// cin >> tc;
	// FOR(i, 1, tc, 1)
	solve();


}
