/*
* Problem   - 282A - Bit++
* Reference - https://codeforces.com/problemset/problem/282/A
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	int x = 0;

	while (test_cases--)
	{
		string s;
		cin >> s;

		if (s == "++X" || s == "X++")
		{
			x += 1;
		}
		else
		{
			x -= 1;
		}
	}

	cout << x;
}