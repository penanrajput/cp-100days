#include <iostream>
#include<algorithm>

using namespace std;

// comparator with descedig
bool compareByStrings(string a, string b)
{
    return a > b;
}

// comparator with ascending lengths
bool compareByLength(string a, string b)
{
    return a.length() > b.length();
}

// comparator with desceding lengths
bool compareByLengthDesceding(string a, string b)
{
    return a.length() < b.length();
}



int main() {
    string s = "Hello Workd";
    cout << s << endl;

    string firstLine;
    getline(cin, firstLine); // to get line
    cout << "Output of firstLine  : " << firstLine << endl;

    string secondLine;
    getline(cin, secondLine); // to get line, you need to get second line
    cout << "Output of secondLine : " << secondLine << endl;
    int s2 = secondLine.length();
    cout << "Length of secondLine : " << s2 << endl;

    for (int i = 0; i < secondLine.length(); i++) {
        cout << secondLine[i] << "-";
    }
    cout << endl;


    string fruits []  = {"bananananan", "orange",  "pinapple", "apple", "mango", "banana", "z"};
    int fLength = sizeof(fruits) / sizeof(fruits[0]);
    cout << "\nflength : " << fLength << endl;
    cout << "\nOriginal Fruits " << endl;
    for (int i = 0; i < fLength; i++)
        cout << fruits[i] << ", ";

    cout << "\n\nSorted Fruits " << endl;

    // sorted first 4 items
    sort(fruits, fruits + 4);
    for (int i = 0; i < fLength; i++)
        cout << fruits[i] << ", ";

    // sorted first 6 items
    cout << endl << endl;
    sort(fruits, fruits + 6);
    for (int i = 0; i < fLength; i++)
        cout << fruits[i] << ", ";

    // Descendig sort using (user defined) comparator (by word)
    cout << endl << endl;
    sort(fruits, fruits + fLength, compareByStrings);
    for (int i = 0; i < fLength; i++)
        cout << fruits[i] << ", ";


    // Ascending sort using (user defined) comparator (by length)
    cout << endl << endl;
    sort(fruits, fruits + fLength, compareByLength);
    for (int i = 0; i < fLength; i++)
        cout << fruits[i] << ", ";

    // Descending sort using (user defined) comparator (by length)
    cout << endl << endl;
    sort(fruits, fruits + fLength, compareByLengthDesceding);
    for (int i = 0; i < fLength; i++)
        cout << fruits[i] << ", ";

    // CP problems can be on above
    // Program : sort the strings in descending order of lengths
    //  compareByLengthDesceding
}