#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<pair<int, int>>d;
    d = {{4, 5}, {6, 7}, {8, 9}};
    for (auto x : d)
        cout<<x.first<<", "<<x.second<<"\n";

    set<int>l;
    l={10, 20, 30, 70 ,90};
    for(auto x:l)
    {
        cout<<x<<" ";
    }

    list<int>s;
    s={10, 20, 30, 70 ,90};
    for(auto x:s)
    {
        cout<<x<<" ";
    }

    array<int, 4> a;
    a = {5, 8, 9, 2};
    for (auto i: a)
        cout << i << ' ';
    cout << '\n';
    // prints "5 8 9 2"


    tuple<int, int, char> t;
    t = {3, 4, 'f'};
    cout << get<2>(t) << '\n';
    // Note that it doesn't work for stack and queue.
}