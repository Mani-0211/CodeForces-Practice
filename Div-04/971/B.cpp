/*
* Problem   - osu!mania
* Reference - https://codeforces.com/contest/2009/problem/B
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		int n;
		cin >> n;

		vector<int> result;

		while (n--)
		{
			string s;
			cin >> s;

			result.push_back(s.find("#") + 1);
		}

		for (int i = result.size() - 1; i >= 0; i--)
		{
			cout << result[i] << " ";
		}

		cout << "\n";
	}
}