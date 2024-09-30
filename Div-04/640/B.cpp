/*
* Problem   - Same Parity Summands
* Reference - https://codeforces.com/contest/1352/problem/B
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		int n, k;
		cin >> n >> k;

		if (n < k)
		{
			cout << "NO\n";
			continue;
		}

		if (n == k)
		{
			cout << "YES\n";

			while (k--)
			{
				cout << 1 << " ";
			}

			cout << "\n";

			continue;
		}

		bool is_even = n % 2 == 0;
		
		vector<int> vect;

		k -= 1;

		if (is_even)
		{
			int temp_n = n;
			int temp_k = k;

			while (k--)
			{
				if (n >= 2)
				{
					vect.push_back(2);

					n -= 2;
				}
				else
				{
					n = -1;
				}
			}

			if (n > 0 && n % 2 == 0)
			{
				vect.push_back(n);
			}
			else
			{
				vect.clear();

				n = temp_n;
				k = temp_k;

				while (k--)
				{
					if (n >= 1)
					{
						vect.push_back(1);

						n -= 1;
					}
					else
					{
						n = -1;
					}
				}

				if (n > 0 && n % 2 != 0)
				{
					vect.push_back(n);
				}
				else
				{
					vect.clear();

					n = -1;
				}
			}
		}
		else
		{
			while (k--)
			{
				if (n >= 1)
				{
					vect.push_back(1);

					n -= 1;
				}
				else
				{
					n = -1;
				}
			}

			if (n > 0 && n % 2 != 0)
			{
				vect.push_back(n);
			}
			else
			{
				vect.clear();

				n = -1;
			}
		}

		if (n == -1)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";

			for (int i : vect)
			{
				cout << i << " ";
			}

			cout << "\n";
		}
	}
}