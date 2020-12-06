// the 2-digit number is divided by the sum and remainder is 3
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, j = 0;
    for (i = 1; i <= 9; i++)
        for (j = 0; j <= 9; j++)
            if ((i * 10 + j) % (i + j) == 3)
                cout << (i * 10 + j) << " ";
    return 0;
}