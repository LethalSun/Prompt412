///#define P_22_B
#ifdef P_22_B
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

vector<vector<int>> rstornt;

int main()
{
	int n, m;
	cin >> n >> m;

	int min = 0;
	int MaxMinStreet = -1;

	for (int i = 0; i < n; ++i)
	{
		vector<int> temp;
		rstornt.push_back(temp);
		int tempMin = INT32_MAX;
		for (int j = 0; j < m; ++j)
		{
			int cost;
			cin >> cost;
			rstornt[i].push_back(cost);
			if (cost < tempMin)
			{
				tempMin = cost;
			}
		}

		if (min < tempMin)
		{
			min = tempMin;
		}
	}

	cout << min;

	return 0;

}
#endif // P_22_B
