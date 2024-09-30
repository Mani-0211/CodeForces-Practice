/*
* Problem   - K-th Not Divisible by n
* Reference - https://codeforces.com/contest/1352/problem/C
*/

#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n, k;
		cin >> n >> k;

		int iteration = k / (n - 1);
		int balance = k % (n - 1);

		if (balance == 0)
		{
			balance = -1;
		}

		cout << (n * iteration) + balance << "\n";
	}
}