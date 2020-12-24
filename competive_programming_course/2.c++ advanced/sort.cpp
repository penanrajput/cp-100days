#include <iostream>
#include<algorithm>
using namespace std;

/* Syntax of sort function
sort (array , array + length of array, comparator-function)
Library Required : algorithm
*/

bool myCompare(int a, int b)
{
    return a > b;
}

int main() {
   
    int arr[] = {54, 6, 9, 1,6 ,45 };
    int n = int(sizeof(arr)/ sizeof(arr[0]));
    cout<<"Size of arr : " << n <<endl;
 
    cout<<"\nUnSorted elements : " <<endl;
     for(int i=0; i<n; i++)
        cout<<arr[i]<< " ";
    
    sort(arr, arr + n); // this is main sort function 
    cout<<"\n\nSorted elements : " <<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<< " ";
        
    sort(arr, arr + n, myCompare); // this is main sort function 
    cout<<"\nSorted elements (Descending) : " <<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<< " ";
    
}