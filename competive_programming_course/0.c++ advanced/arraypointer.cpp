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


// this recursion is important
// to remember
void method(int *a, int n)
{
	if (n == 1)  return;

	cout << "a[0] " << a[0] << ", a[1] " << a[1] << endl;
	method(a + 1, n - 1);



}


// you can understand "method" using this below code
// becoz we are not accessing "a" with "n"
// so its good to learn
void method2(int *a, int n)
{
	if (n == 0)  return;

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
	method2(c, 5);

}

int main() {
	// int tc;
	// cin >> tc;
	// FOR(i, 1, tc, 1)
	solve();


}
