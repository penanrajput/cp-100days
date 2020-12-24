#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

// Pyramid pattern using stars

int main()
{
    int n, m;
    // cin >> n >> m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < (n - i); s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}