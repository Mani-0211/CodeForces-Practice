/*
* Problem   - Sum of Round Numbers
* Reference - https://codeforces.com/contest/1352/problem/A
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		string n;
		cin >> n;

		int length = n.length();

		vector<int> vect;

		for (int i = 0; i < length; i++)
		{
			if (n[i] != '0')
			{
				int value = (n[i] - '0') * pow(10, length - (i + 1));

				vect.push_back(value);
			}
		}

		cout << vect.size() << "\n";

		for (int i : vect)
		{
			cout << i << " ";
		}

		cout << "\n";
	}
}