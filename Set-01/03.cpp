/*
* Problem   - 2008A - Sakurako's Exam
* Reference - https://codeforces.com/problemset/problem/2008/A
*/

#include <iostream>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		int ones, twos;
		cin >> ones >> twos;

		if (ones % 2 != 0 || (ones < 2 && twos % 2 != 0))
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}
}