//#define P_W_15_A
#ifdef P_W_15_A
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
	int m, n;
	cin >> n;


	int chessfirstend = INT_MAX;
	int chesslaststart = 0;

	int programfirstend = INT_MAX;
	int programlaststart = 0;


	for (int i = 0; i < n; ++i)
	{
		int start, end;
		cin >> start >> end;
		chessfirstend = min(chessfirstend, end);
		chesslaststart = max(chesslaststart, start);
	}

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int start, end;
		cin >> start >> end;
		programfirstend = min(programfirstend, end);
		programlaststart = max(programlaststart, start);

	}
	int ans = 0;

	if (programlaststart - chessfirstend > 0)
	{
		ans = programlaststart - chessfirstend;
	}

	if (chesslaststart - programfirstend > 0)
	{
		ans = max(ans, chesslaststart - programfirstend);
	}

	cout << ans;
}
#endif//P_W_15_A