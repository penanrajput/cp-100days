#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// Priority Queue operations  : (All methods same as Stack)
// void     push(datatype)
// datatype pop (void)
// bool     empty(void)
// datatype top(void)


int main()
{

    /*
    priority_queue <int> pq;
    int arr[] = {5, 6, 2, 8, 9, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<size; i++)
    {
        pq.push(arr[i]);
    }

    while(pq.empty() == 0)
    {
        int toq = pq.top();
        pq.pop();
        cout << toq << ", ";
    }
    // 10, 9, 8, 6, 5, 2, 1, (by default, maxHeap)
    */


    // to make minHeap
    //priority_queue < int, vector<int>, _____ > mpq; // minHeap Priority Queue
    // _____ is comparator
    // Here comparator of 2 types : 1. System defined, 2. user defined


    priority_queue < int, vector<int>, greater<int> > mpq; // minHeap Priority Queue
    int arr[] = {5, 6, 2, 8, 9, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        mpq.push(arr[i]);
    }

    while (mpq.empty() == 0)
    {
        int toq = mpq.top();
        mpq.pop();
        cout << toq << ", ";
    }



}