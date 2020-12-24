#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// program is incomplete

int main()
{
    int t1 = 0, t2 = 0, t3 = 0;
    for (int i = 0; i < 3; i++)
    {
        int n;

        cin >> n;
        if (n >= 1 && n <= 100)
            t1 += n;
        else
            cout << "INVALID INPUT" << endl;

        cin >> n;
        if (n >= 1 && n <= 100)
            t2 += n;
        else
            cout << "INVALID INPUT" << endl;

        cin >> n;
        if (n >= 1 && n <= 100)
            t3 += n;
        else
            cout << "INVALID INPUT" << endl;
    }
    t1 = (int)(t1 / 3);
    t2 = (int)(t2 / 3);
    t3 = (int)(t3 / 3);
    if (t1 < 70 && t2 < 70 && t3 < 70)
        cout << "All trainees are unfit" << endl;
    else
    {
        int score = max(t1, max(t2, t3));
        if (t1 == score)
            cout << "Trainee Number : 1" << endl;
        if (t2 == score)
            cout << "Trainee Number : 2" << endl;
        if (t3 == score)
            cout << "Trainee Number : 3" << endl;
    }
}