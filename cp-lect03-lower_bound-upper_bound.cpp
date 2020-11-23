#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 40, 40, 60, 80};
    vector<int> arr (array, array + 6);
    vector<int> :: iterator low, up;
    low = lower_bound(arr.begin(), arr.end(), 40);
    up =  upper_bound(arr.begin(), arr.end(), 40);

    cout << "low -> " << (low - arr.begin()) << endl;
    cout << "up  -> " << (up - arr.begin()) << endl;

    cout << "Printing all the index where 40s are repeated ";


    if (binary_search(array, array + 6, 40))
        cout << " Present" << endl;
    else
        cout << " Not Present " << endl;

}