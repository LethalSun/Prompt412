//#define P_W_14_C
#ifdef P_W_14_C
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

//1.2.3.4.5.6.7.8.9.10.11.12.13.14.15.
struct st
{
	int value[21] = {0,};
	int count;
};

st tree[201010];

int main()
{
	int n,k;

	cin >> n >> k;

	int m = 0;

	for (int i = 0; i < n; ++i)
	{
		int temp;

		cin >> temp;

		tree[temp].value[0] += 1;
		tree[temp].count += 1;

		m = max(m, temp);
	}

	i64 ans = LLONG_MAX;

	for (int i = m; i > 0; --i)
	{		

		tree[i / 2].count += tree[i].count;

		for (int j = 0; j < 20; ++j)
		{
			tree[i / 2].value[j + 1] += tree[i].value[j];
		}			 
	}

	

	for (int i = 0; i <= m; ++i)
	{
		if (tree[i].count >= k)
		{
			int tk = k;
			i64 tans = 0;
			for (int j = 0; j < 20; ++j)
			{
				if (tk - tree[i].value[j] <= 0)
				{
					tans += (i64)tk * j;
					break;
				}

				tans += (i64)(tree[i].value[j] * j);
				tk -= tree[i].value[j];
			}

			ans = min(ans, tans);
		}
	}

	cout << ans;
}
#endif // P_W_14_C
