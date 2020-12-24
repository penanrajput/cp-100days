/* 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(8, 10);
    int num = 5;
    for(int i=0; i<8; i++)
    {
        // v[i]=num;
        v.push_back(num);
        num += 5;
    }
    for(auto x:v)
    {

        cout<<x<<"\n";
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // declaration
    // initialisation
    v = {4, 5, 6, 7, 8, 9}; // Fast way to do the things

    // traverse
    for (auto i : v)
    {
        cout << i << ", ";
    }
    cout << endl
         << endl;
    // declaration
    cout << v[5] << endl;
}