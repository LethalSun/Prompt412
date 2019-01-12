//#define P_20_B

#ifdef P_20_B
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
	int k;
	cin >> k;

	if (k > 18 * 2)
	{
		cout << -1;
		return 0;
	}

	i64 output = 0;

	if (k % 2 == 1)
	{
		output += 6;
		--k;
	}

	for (int i = 0; i < k/2; ++i)
	{
		output *= 10;
		output += 8;
	}

	cout << output;

	return 0;
}
#endif // P_20_B
