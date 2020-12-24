#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// allocating 2x, 4x, etc size of first array
// unlimited elements can be inserted
// access using also v[i]
// push_back ()
// pop_back()
// reserve i.e. atleast 100 elements , becoz vector defaultly doubling of size  or memory for elements

bool compare(int a, int b)
{
    return a > b;
}

int main()
{

    vector<int> v;
    //   v[i] will give you error if i th index does not exist
    // so we will use push_back()
    // v.reserve(100); // will reserve atleast 100 elements

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    v.pop_back();

    // Print this elements
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // v.clear();

    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // capacity () is only for your programmers fulfil
    cout << "capacity : " << v.capacity() << endl; // now it's capacity : 8

    v.push_back(1);
    v.push_back(10);
    v.push_back(11); //
    v.push_back(12); // now 9 elements in vector
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    cout << "capacity : " << v.capacity() << endl; // now it's capacity 16
    // so this is dangerous

    cout << "\nAbout vector m : " << endl;
    vector<int> m;
    m.reserve(1);
    for (int i = 0; i < 5; i++)
        m.push_back(i);
    for (int i = 0; i < m.size(); i++)
        cout << m[i] << " ";
    cout << endl;
    cout << "capacity : " << m.capacity() << endl;

    // erase to delete the element
    // front to get the first element
    // back to get the last element
    // at() is same as v[i]

    //max_size to know the max size vector can take in worst case

    cout << "'\n\nMax size : " << m.max_size();
}
