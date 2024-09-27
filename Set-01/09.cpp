/*
* Problem   - 266A - Stones on the Table
* Reference - https://codeforces.com/problemset/problem/266/A
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int stones_count;
	string word;

	cin >> stones_count >> word;

	int match = 0;

	for (int i = 0; i < word.length() - 1; i++)
	{
		if (word[i] == word[i + 1])
		{
			match += 1;
		}
	}

	cout << match;
}