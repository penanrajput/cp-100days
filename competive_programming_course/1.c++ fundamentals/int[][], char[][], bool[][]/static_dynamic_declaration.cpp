/*
Author : Penan Rajput
© Copyright 2020
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define SCD(t) scanf("%d", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld", &t)
#define SCC(t) scanf("%c", &t)
#define SCS(t) scanf("%s", t)
#define SCF(t) scanf("%f", &t)
#define SCLF(t) scanf("%lf", &t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
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
typedef unsigned long long int uint64;
#define ll long long

// MultiDimensional Array
// Static Array
// advantage : predefined array
// use case : to declare and define predefined value set,
// so that u can use it later directly
void static_array()
{

  int arr[2][5] = {{1, 2, 4, 5, 10}, {4, 2, 1, 3, 6}}; // valid
  // int *arr[2] = { {1, 2, 4, 5, 10}, {4, 2, 1, 3, 6}}; // invalid
  FOR(i, 0, 2, 1)
  {
    FOR(j, 0, 5, 1)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void dynamic_array()
{
  int *arr[3]; // valid, best in market
  for (int i = 0; i < 3; i++)
  {
    arr[i] = new int[5]{i + 3, i + 4, i + 2, i + 6, i + 10};
  }
  for (int i = 0; i < 3; i++)
  {
    FOR(j, 0, 5, 1)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void dynamic_array2()
{
  int **arr;
  FOR(i, 0, 2, 1)
  {
    arr[i] = new int[5]{i + 3, i + 4, i + 2, i + 6, i + 10};
  }

  FOR(i, 0, 2, 1)
  {
    FOR(j, 0, 5, 1)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{

  dynamic_array2();
}
