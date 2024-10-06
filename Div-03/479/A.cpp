/*
* Problem   - Wrong Subtraction
* Reference - https://codeforces.com/problemset/problem/977/A
*/

#include <iostream>

using namespace std;

int main()
{
	int number, iteration;

	cin >> number >> iteration;

	while (iteration--)
	{
		if (number % 10 == 0)
		{
			number /= 10;
		}
		else
		{
			number -= 1;
		}
	}

	cout << number << "\n";
}