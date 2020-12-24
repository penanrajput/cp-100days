#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

template <class T>
void printvv(vector<vector<T>> v)
{
    for (vector<T> a : v)
    {
        cout << "(";
        for (T element : a)
            cout << element << ", ";
        cout << ")";
        cout << endl;
    }
}

vector<vector<char>> powerset(string s)
{
    vector<vector<char>> v;
    for (int i = 0; i < (1 << s.length()); i++)
    {
        vector<char> k;
        int p = 0;
        int j = i;
        while (j > 0)
        {

            if (j & 1)
            {
                k.push_back(s[p]);
            }

            ++p;
            j = j >> 1;
        }
        v.push_back(k);
    }
    return v;
}

int main()
{
    string s;
    cin >> s;
    vector<vector<char>> v = powerset(s);
    printvv(v);
}