#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    list<int> l;
    l.push_back(5);
    l.push_back(10);
    l.push_back(15);
    for (int item : l)
        cout << item << ", ";
    cout << endl;
    cout << " Size = " << l.size() << endl;

    list<string> l2(2);
    l2.push_back("modi");
    l2.push_back("yogi");
    l2.push_back("trump");
    l2.push_back("ronaldo");
    l2.push_back("messi");
    cout << l2.size() << endl;
}