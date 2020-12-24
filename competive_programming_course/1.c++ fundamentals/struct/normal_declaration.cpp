#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
// NOTE : typedef is not allowed
struct Pair
{
    int min = 0; // allowed
    int max;     // allowed
};

int main()
{
    struct Pair minmax; // this kind of declaration
    minmax.min = -5;
    minmax.max = 60;
    printf(" min=%d, max=%d\n", minmax.min, minmax.max);

    struct Pair *p2 = &minmax;
    printf(" min=%d, max=%d\n", p2->min, p2->max);
}

*/

/*
typedef struct Triplet
{
    int a = 0;
    int b = 0;
    int c = 0;
};
*/
// is same as
struct Triplet
{
    int a = 0;
    int b = 0;
    int c = 0;
};

int main()
{
    Triplet trip;
    trip.a = 50;
    trip.b = 60;
    trip.c = 70;

    cout << trip.a << endl;
    cout << trip.b << endl;
    cout << trip.c << endl;
}

// typedef struct SomeThing { int whatever; };

// This is equivalent to:

// struct SomeThing { int whatever; };
// Note that typedef is officially (or syntactically) a 'storage class specifier', like static, extern, auto and register.