//#define P_19_C

#ifdef P_19_C
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
	string str;
	cin >> n >> str;

	int count1 = 0;
	int count0 = 0;

	for (int i = 0; i < n; ++i)
	{
		if (str[i] == '0')
		{
			++count0;
		}

		if (str[i] == '1')
		{
			++count1;
		}
	}

	string ans;

	if (count0 == 0)
	{
		cout << "1";
	}
	else if (count0 == 1)
	{
		if (count1 == 0)
		{
			cout << "0";
		}
		else
		{
			cout << "10";
		}
	}
	else
	{
		ans += '1';

		for (int i = 0; i < count0; ++i)
		{
			ans += '0';
		}

		cout << ans;
	}
	return 0;
}

#endif // P_19_C
