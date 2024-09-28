/*
* Problem   - 339A - Helpful Maths
* Reference - https://codeforces.com/contest/339/problem/A
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string strWord;
	cin >> strWord;

	vector<int> vWord;

	for(char i : strWord)
	{
		if(i != '+')
		{
			int nValue = (i - '0');

			vWord.push_back(nValue);
		}
	}

	sort(vWord.begin(), vWord.end());
	string strResult = "";

	for(int i = 0; i < vWord.size(); i++)
	{
		strResult += to_string(vWord[i]);

		if(i != (vWord.size() - 1))
		{
			strResult += "+";
		}
	}

	cout << strResult;

	return 0;
}