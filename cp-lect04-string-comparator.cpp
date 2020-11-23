#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void pprint(string arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;
}


// Comparators are great and makes work easy

// comparator with desceding lengths
bool compareByLengthDesceding(string a, string b)
{
    if (a.length() == b.length())
        return a > b;
    return a.length() < b.length();
}


int main() {
    string fruits []  = {"aaaab", "aaaaa",  "aabab", "ababa", "abbbb", "aaabb", "aaaba", "bcdef", "csdfs", "zefgr", "z", "x", "v"};
    int fLength = sizeof(fruits) / sizeof(fruits[0]);
    sort(fruits, fruits + fLength, compareByLengthDesceding);
    pprint(fruits, fLength);
}