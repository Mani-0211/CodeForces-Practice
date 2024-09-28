/*
* Problem   - 2013A - Zhan's Blender
* Reference - https://codeforces.com/problemset/problem/2013/A
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		int total_fruits, blender_can_blend, fruits_can_put;
		cin >> total_fruits >> blender_can_blend >> fruits_can_put;

		int can_blend = min(blender_can_blend, fruits_can_put);
		int minimum_second = total_fruits / can_blend;

		if (total_fruits % can_blend != 0)
		{
			minimum_second += 1;
		}

		cout << minimum_second << "\n";
	}
}