// Fibonacci Series up to n number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n1 = 0 , n2 = 1, limit;
	int amount;
	int sum = 0;
	int ans;

	cout << "Enter number\n";
	cin >> amount;
	cout << "Enter number limit\n";
	cin >> limit;

	for (int i = 1; i <= amount; ++i)
	{
		sum = n1 + n2;
		n1 = sum;
		n2 = n1 + n2;
		if (n2 >= limit || n1 >= limit) break;
		cout << n1 << endl << n2 << endl;
	}
    return 0;
}

