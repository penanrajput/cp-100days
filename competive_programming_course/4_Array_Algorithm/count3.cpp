#include <bits/stdc++.h>

using namespace std;

//  Write a program to find number of times digit 3 occurs in each and every
number from 0 to n int count3(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while (num > 0)
        {
            if (num % 10 == 3)
            {
                // cout << " " << i << endl;
                count++;
            }
            num = num / 10;
        }
    }
    return count;
}
int main()
{

    int n;
    cin >> n;
    cout << count3(n);
}
