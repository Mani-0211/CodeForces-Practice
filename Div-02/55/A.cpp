/*
* Problem   - 59A - Word
* Reference - https://codeforces.com/problemset/problem/59/A
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int uppercase_count = 0;

	for (char c : word)
	{
		int ascii = (int) c;

		if (ascii >= 65 && ascii <= 90)
		{
			uppercase_count += 1;
		}
	}

	if ((word.length() / 2) >= uppercase_count)
	{
		for (char& c : word) {
			c = tolower(c);
		}
	}
	else
	{
		for (char& c : word) {
			c = toupper(c);
		}
	}

	cout << word;
}