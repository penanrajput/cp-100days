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


// Problem : Unique Number 3
// array has all the numbers are present thrice except for one number. find that number
// input : {1, 1, 1, 2, 5, 5, 5}
// output : 2

// this problem also know as 3N+1,
// extended to any 4N+1, 5n+1, 6N+1,.. etc

// Solution:
//     5 = 1 0 1
//     5 = 1 0 1
//     5 = 1 0 1
//     2 = 0 1 0
//     1 = 0 0 1
//     1 = 0 0 1
//     1 = 0 0 1
// ----------
// cnt  = 3 1 6
// cnt%3= 0 1 0/

// answers is 010 i.e. 2

// void print(int n, int cnt[])
// {
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << cnt[i] << " ";
// 	}
// 	cout << endl;
// }

int findUnique(int n, int arr[])
{
	int cnt[64] = {0};
	for (int i = 0; i < n; i++)
	{
		// cout << arr[i] << " " << endl;
		int j = 0;
		while (arr[i] > 0)
		{
			int last_bit = arr[i] & 1;
			cnt[j] += last_bit;
			// cout << "arr[" << i << "] = " << arr[i] << endl;
			arr[i] = arr[i] >> 1;
			++j;

			// print(n, cnt);
		}
	}
	// Method 1
	// int result = 0 ;
	// for (int i = 0; i < 64; i++)
	// {
	// 	cnt[i] = cnt[i] % 3;
	// 	result = result + cnt[i] * (1 << i);
	// 	// cout << "result for i=" << i << ", cnt[i]= " << cnt[i] << ", result=" << result << endl;
	// }

	// Method 2 (same efficiency)
	int p = 1;
	int res  = 0;
	int result = 0 ;
	for (int i = 0; i < 64; i++)
	{
		cnt[i] = cnt[i] % 3;
		result = result + cnt[i] * p;
		p = p << 1;
	}

	return result;

	// return 0;/
}

void solve()
{
	// int n ;
	// cin >> n;
	int n = 7;
	// int arr[] = {1, 1, 1, 2, 5, 5, 5};
	int arr[] = {5, 5, 6, 3, 5, 3, 3};
	cout << findUnique(n , arr);



}

int main() {
	// int tc;
	// cin >> tc;
	// FOR(i, 1, tc, 1)
	solve();


}
