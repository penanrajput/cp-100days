#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// two type of maps:
// unordered_map
// map

// Methods:
// insert() : void insert(make_pair())
// empty()  : bool empty()
// count()  : int count() // returns 1 or 0
// find()   : iterator find(key)
// count()  : count(key)

int main()
{

    // unordered_map<string, int> m ;
    map<string, int> m;
    m.insert(make_pair("Apple", 20)); // first way to insert
    m.insert(make_pair("Mango", 10));
    m.insert(make_pair("Guava", 30));

    m["Orange"] = 200; // second way to insert

    cout << m.count("Apple") << endl;

    if (m.count("Apple") == 1)
        cout << "Price of Apple : " << m["Apple"] << endl;

    if (m.count("Pinapple") == 1)
        cout << "Price of Pinaplple : " << m["Pinapple"] << endl;
    else
        cout << "Pinapple not found" << endl;

    // iterator to search
    auto f = m.find("Apple");
    if (f != m.end())
        cout << (f->first) << " : " << (f->second) << endl;

    auto g = m.find("Laptop");
    if (g != m.end())
        cout << (g->first) << " : " << (g->second) << endl;
    else
        cout << "Not found laptop" << endl;

    // extra functions
    cout << m.size() << endl;
    m.clear();
    cout << m.size() << endl;

    cout << "empty()" << endl;
    cout << m.empty() << endl;
    m["Computer"] = 200; // second way to insert
    cout << m.empty() << endl;

    // simply iterating
    m.clear();
    m.insert(make_pair("Apple", 20));
    m.insert(make_pair("Mango", 10));
    m.insert(make_pair("Guava", 30));
    m["Orange"] = 200;

    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << (i->first) << " : " << (i->second) << endl;
    }
}