/*
* Problem   - 236A - Boy or Girl
* Reference - https://codeforces.com/problemset/problem/236/A
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
	string word;
	cin >> word;

	set<char> distinct_characters;

	for (char c : word)
	{
		distinct_characters.insert(c);
	}

	if (distinct_characters.size() % 2 == 0)
	{
		cout << "CHAT WITH HER!"; 
	}
	else
	{
		cout << "IGNORE HIM!";
	}
}