/*
* Problem   - Minimize!
* Reference - https://codeforces.com/contest/2009/problem/A
*/

#include <iostream>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		int a, b;
		cin >> a >> b;

		cout << (a - a) + (b - a) << "\n";
	}
}