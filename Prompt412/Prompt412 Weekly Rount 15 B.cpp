#define P_W_15_B
#ifdef P_W_15_B
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

int main()
{
	int n;
	cin >> n;

	vector<i64> pos;

	for (int i = 0; i < n; ++i)
	{
		i64 temp;
		cin >> temp;

		pos.push_back(temp);
	}

	sort(pos.begin(), pos.end());

	int opt = (pos.size() -1) / 2;

	cout << pos[opt];
}
#endif//P_W_15_B