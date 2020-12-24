#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    queue<int> q;
    q.push(40);
    q.push(30);
    q.push(20);
    queue<int> q1 = q;
    q1.push(90);
    cout << q.back() << endl;
    cout << q1.back() << endl;

    cout << q.front() << endl;
    cout << q1.front() << endl;
}