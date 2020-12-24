#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

// Least Set bit

// operations
// vanish the least set bit

// vanish the least set bit
//  n & (n-1)
// 00110100 52 (given)
// 00110000 48 (after first step)
// 00100000 32 (after second step)
// 00000000 0  (after third step)
void method(int n)
{
    while (n > 0)
    {
        cout << BIT8(n) << " " << n << endl;
        n = n & (n - 1);
    }
    cout << BIT8(n) << " " << n << endl;
}

// extracts the lowest set bit of x (all other bits are cleared)
// n & ~(n-1)
// 00110100 52 (given)
// 00000100 4  (after first step) //
// 00010000 16 (after second step)
// 00100000 32 (after third step)
// 00000000 0  (after fourth step)

void method2(int n)
{
    cout << BIT8(n) << " " << n << endl;
    while (n > 0)
    {
        int m = n & ~(n - 1);
        cout << BIT8(m) << " " << m << endl;
        n = n & (n - 1);
    }
    cout << BIT8(n) << " " << n << endl;
}

int gray(int n)
{
    return n n >> 1;
}

int main()
{
    int n = 52;
    // method(n);
    method2(n);
}