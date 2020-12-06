#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
bitset has two methods
to_string()
to_ulong()

*/

// integer(base10) into bitset
// used to just output purpose
int itob_i(int n)
{
	/* integer to binary */
	bitset<16> result(n);
	// return result;
	return 0;
}

// integer(base10) into string(base2)
// recommended for string manipulation
string itob_str(int n)
{
	/* integer to string*/
	return bitset<8>(n).to_string();
	;
}

// string bitset<8> (int).to_string()

int main()
{

	//
	//  cout << itob(653);
	// int a = (int)bitset<16> (65).to_ulong();
	// cout << a << endl;

	// cout << bitset<8> ("01001").to_ulong() << endl;
	// cout << bitset<8> (23).to_string() << endl;

	/*
		// let's play with some inbuilt function
		// atoi()
		// Syntax : int atoi(char[])

		// char str[100];
		// cin >> str;
		char str [] = "500";
		int num = atoi(str);
		cout << "the num : " << num << endl;
	*/
}
