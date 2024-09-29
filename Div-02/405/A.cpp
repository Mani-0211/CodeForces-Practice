/*
* Problem   - Bear and Big Brother
* Reference - https://codeforces.com/problemset/problem/791/A
*/

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int years_taken = 0;

	while (a <= b)
	{
		a *= 3;
		b *= 2;

		years_taken += 1;
	}

	cout << years_taken << "\n";
}