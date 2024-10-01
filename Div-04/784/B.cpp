/*
* Problem   - Triple
* Reference - https://codeforces.com/contest/1669/problem/B
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int length;
		cin >> length;

		map<int, int> group;

		while (length--)
		{
			int x;
			cin >> x;

			if (group.count(x) == 1)
			{
				group.at(x) += 1;
			}
			else
			{
				group.insert({ x, 1 });
			}
		}

		int value = -1;

		for (auto count : group)
		{
			if (count.second >= 3)
			{
				value = count.first;
				break;
			}
		}

		cout << value << "\n";
	}
}