/*
* Problem   - 231A - Team
* Reference - https://codeforces.com/problemset/problem/231/A
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	int can_solve = 0;

	while (test_cases--)
	{
		int problems_can_solve[3];

		for (int i = 0; i < 3; i++)
		{
			cin >> problems_can_solve[i];
		}

		int length = sizeof(problems_can_solve) / sizeof(problems_can_solve[0]);

		if (count(problems_can_solve, problems_can_solve + length, 1) >= 2)
		{
			can_solve += 1;
		}
	}

	cout << can_solve;
}