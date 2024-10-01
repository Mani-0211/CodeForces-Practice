/*
* Problem   - Division?
* Reference - https://codeforces.com/contest/1669/problem/A
*/

#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int rating;
		cin >> rating;

		if (rating >= 1900)
		{
			cout << "Division 1\n";
		}
		else if (rating >= 1600)
		{
			cout << "Division 2\n";
		}
		else if (rating >= 1400)
		{
			cout << "Division 3\n";
		}
		else
		{
			cout << "Division 4\n";
		}
	}
}