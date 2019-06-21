//#define P_20_E

#ifdef P_20_E
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

struct tre
{
	int x;
	int h;
};

vector<tre> tres;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		tre t;
		cin >> t.x;
		cin >> t.h;

		tres.push_back(t);
	}

	int ans = 2;

	if (tres.size() == 1)
	{
		ans = 1;
	}


	for (int i = 1; i < tres.size() - 1; ++i)
	{

		int lastOccupaiedL = tres[i].x - tres[i].h;
		int lastOccupaiedR = tres[i].x + tres[i].h;

		//can cut down to left?
		if (tres[i - 1].x < lastOccupaiedL)
		{
			++ans; 
			continue;
		}

		//can next tree cut down to left?
		if ((tres[i + 1].x - tres[i + 1].h) > tres[i].x)
		{

			if (tres[i + 1].x - tres[i + 1].h > lastOccupaiedR)		//can cut down to right with cut next tree down to left?
			{
				++ans;
				tres[i].x += tres[i].h;

				continue;
			}
		}

		if (tres[i + 1].x > lastOccupaiedR)		//can cut down to right ?
		{
			++ans;
			tres[i].x += tres[i].h;
		}

	}

	cout << ans;

	return 0;

}
#endif // P_20_D
