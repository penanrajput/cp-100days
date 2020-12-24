// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void factors(int n)
{
	while (n % 2 == 0)
	{
		cout << 2 << " ";
		n = n / 2;
	}
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			n = n / i;
		}
	}
	if (n > 2)
	{
		cout << n;
	}
}
int main()
{
	// int n;
	// cin>>n;
	factors(12);
	cout << endl; cout << endl;
	factors(15);
	cout << endl; cout << endl;
	factors(20);
	return 0;
}