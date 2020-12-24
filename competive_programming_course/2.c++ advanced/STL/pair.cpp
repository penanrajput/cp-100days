#include <bits/stdc++.h>
using namespace std;

int main()
{
    // First way of declartion, initialisation, access
    pair<int, int> p;
    p = {4, 5};
    cout << p.first << endl;
    cout << p.second << endl;

    // second way of declartion, initialisation, access
    pair<int, int> p2;
    p2.first = 60;
    p2.second = 70;
    cout << p2.first << endl;
    cout << p2.second << endl;
}