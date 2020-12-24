#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<char, vector<string>>> v;
    // pair<char, vector<string>> n;
    // // vector<string> menu{"abc", "def", "gf"};
    // n = make_pair('c', vector<string>{"abc", "def", "gf"});
    // v.push_back(n);

    v.push_back(make_pair('c', vector<string>{"abc", "def", "gf"}));
    v.push_back(make_pair('a', vector<string>{"abc", "def", "gfz"}));

    for (auto i : v)
    {
        cout << i.first << " : ";
        for (string s : i.second)
        {
            cout << s << ", ";
        }
        cout << endl;
    }
}