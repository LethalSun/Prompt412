//#define P_22_C
#ifdef P_22_C
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
	int n, k;
	string colors;
	cin >> n >> k;
	cin >> colors;

	vector<int> colorCount(26,0);
	for (int i = 0; i < n; ++i)
	{
		++colorCount[colors[i] - 'a'];
	}
	

	for (int i = 0; i < 26; ++i)
	{
		if (colorCount[i] > k)
		{
			cout << "NO";
			return 0;
		}
	}

	cout << "Yes";

	return 0;

}
#endif // P_22_C
