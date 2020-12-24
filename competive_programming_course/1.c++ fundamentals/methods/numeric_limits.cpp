#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

int main()
{

    // int num = INT_MAX;
    // cout << num << endl;

    // num = INT_MIN;
    // cout << num << endl;

    // short num = SHRT_MAX;
    // cout << num << endl;

    // num = SHRT_MIN;
    // cout << num << endl;

    int num = numeric_limits<int>::max();
    cout << num << endl;
    num = numeric_limits<int>::min();
    cout << num << endl;

    cout << numeric_limits<short>::min() << endl;
    cout << numeric_limits<short>::max() << endl;
    // cout << log2(numeric_limits<short>::min()) << endl;
}