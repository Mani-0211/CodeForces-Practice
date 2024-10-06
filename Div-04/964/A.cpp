/*
* Problem   - A+B Again?
* Reference - https://codeforces.com/contest/1999/problem/A
*/

#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		string number;
		cin >> number;

		cout << number.at(0) - '0' + number.at(1) - '0' << "\n";
	}
}