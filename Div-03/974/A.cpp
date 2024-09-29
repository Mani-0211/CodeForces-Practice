/*
* Problem   - Robin Helps
* Reference - https://codeforces.com/problemset/problem/2014/A
*/

#include <iostream>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		int n, k;
		cin >> n >> k;

		int robin_have = 0;
		int given_gold = 0;

		while (n--)
		{
			int x;
			cin >> x;

			if (x >= k)
			{
				robin_have += x;
			}
			else if (x == 0 && robin_have > 0)
			{
				given_gold += 1;
				robin_have -= 1;
			}
		}

		cout << given_gold << "\n";
	}
}