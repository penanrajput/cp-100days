#include <iostream>
using namespace std;

// Parition, Recursion, Merge Partition

void findminmax(int a[], int left, int right, int &min, int &max)
{
    if (left == right)
    {
        min = a[left];
        max = a[right];
    }
    else
    {
        int mid = (left + right) / 2;
        findminmax(a, left, mid, min, max);
        int left_min = min;
        int left_max = max;
        findminmax(a, mid + 1, right, min, max);
        int right_min = min;
        int right_max = max;

        min = left_min < right_min ? left_min : right_min;
        max = left_max > right_max ? left_max : right_max;
    }
}

int main()
{
    int arr[] = {4, 2, 6, 8, 1, 3, 19, 4, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min = 0, max = 0;
    findminmax(arr, 0, len, min, max);
    cout << min << " " << max;
    return 0;
}