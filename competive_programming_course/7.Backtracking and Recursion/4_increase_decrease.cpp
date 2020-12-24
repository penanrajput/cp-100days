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

// lesson:
// imagine stack
// code called  after recursion => LIFO (last in first out)
// code called before recursion => FCFS (first come first serve)
/*
| F(5) |
| F(4) |
| F(3) |
| F(2) |
| F(1) |
--------
*/

void decrease(int n)
{
	if (n == 0)
		return;
	cout << n << " " ;
	decrease(--n);

}

void increase(int n)
{
	if (n == 0)
		return;
	increase(n - 1);
	cout << n << " " ;

}

void solve()
{
	int n, i = 1;
	cin >> n;
	decrease(n);
	cout << endl;
	increase(n);
	// both the function have same call stack
	// and cout call is output
}

int main() {
	// int tc;
	// cin >> tc;
	// FOR(i, 1, tc, 1)
	solve();


}
