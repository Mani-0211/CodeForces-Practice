/*
* Problem   - 158A - Next Round
* Reference - https://codeforces.com/problemset/problem/158/A
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int participants, mentioned_person;
	cin >> participants >> mentioned_person;

	int scores[participants];

	for (int i = 0; i < participants; i++)
	{
		cin >> scores[i];
	}

	int score = scores[mentioned_person - 1];
	int advanced = 0;

	for (int s : scores)
	{
		if (s >= score && s != 0)
		{
			advanced += 1;
		}
	}

	cout << advanced;
}