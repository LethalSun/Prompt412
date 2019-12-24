//#define P_W_13_A
#ifdef P_W_13_A
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <string.h>
#include <math.h>
#include <random>
#include <functional>
#include <assert.h>
#include <math.h>

using namespace std;

using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int checkLetterCount(string s, int &k)
{
	int checker[27] = {0,};
	int count = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (checker[s[i] - 'a'] == 0)
		{
			int sh = (int)(s[i] - 'a');
			k += (1 << sh);
			checker[s[i] - 'a'] = 1;
			++count;
		}


	}

	return count;
}


int main()
{
	int n;
	cin >> n;

	map<int, int> a26Char;

	for (int i = 0; i < n; ++i)
	{
		string temp;
		cin >> temp;
		int k = 0;
		if (checkLetterCount(temp,k) < 3)
		{
			if(a26Char[k] == false)
				a26Char[k] = temp.size();
			else
			{
				a26Char[k] += temp.size();
			}
		}
	}

	int ans = INT_MIN;

	for (int i = 0; i < 26; ++i)
	{
		int k1 = 1 << i;
		for (int j = i + 1; j < 26; ++j)
		{
			int k2 = 1 << j;

			int k = k1 + k2;

			int tmax = a26Char[k] + a26Char[k2] + a26Char[k1];

			ans = max(ans, tmax);
		}
	}

	cout << ans;

}
#endif//P_W_13_A