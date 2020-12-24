#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

void powerset(string s)
{
    for (int i = 0; i < (1 << s.length()); i++)
    {
        int p = 0;
        int j = i;
        while (j > 0)
        {
            if (j & 1)
                cout << s[p];
            ++p;
            j = j >> 1;
        }
        cout << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    powerset(s);
}