/*
* Problem   - Alice, Bob and Candies
* Reference - https://codeforces.com/contest/1352/problem/D
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int length;
		cin >> length;

		deque<int> candies;

		while (length--)
		{
			int x;
			cin >> x;

			candies.push_back(x);
		}

		int number_of_moves = 0;
		int alice_eaten = 0;
		int bob_eaten = 0;

		int previous_count = 0;
		int current_count = 0;

		bool alice_turn = true;

		while (!candies.empty())
		{
			int candy;

			if (alice_turn)
			{
				candy = candies.front();
				candies.pop_front();

				alice_eaten += candy;
			}
			else
			{
				candy = candies.back();
				candies.pop_back();

				bob_eaten += candy;
			}

			current_count += candy;

			if (current_count > previous_count)
			{
				number_of_moves += 1;

				alice_turn = !alice_turn;

				previous_count = current_count;
				current_count = 0;
			}
		}

		if (current_count > 0)
		{
			number_of_moves += 1;
		}

		cout << number_of_moves << " " << alice_eaten << " " << bob_eaten << "\n";
	}
}