//#define P_17_C

#ifdef P_17_C
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

i64 n = 0;
i64 x = 0;

vector<tuple<char, i64>> Wants;

i64 dchildren = 0;

i64 icecream = 0;

void GetInput()
{
	cin >> n >> x;

	for (int i = 0; i < n; ++i)
	{
		char op;
		i64 count;

		cin >> op >> count;

		auto tu = make_tuple(op, count);

		Wants.push_back(tu);
	}
}

void print()
{
	cout << n << ' ' << x << '\n';

	for (auto item : Wants)
	{
		cout << get<0>(item) << ' ' << get<1>(item) << '\n';
	}


}

void GiveIceCream()
{
	icecream += x;

	for (int i = 0; i < n; ++i)
	{
		if (get<0>(Wants[i]) == '+')
		{
			icecream += get<1>(Wants[i]);
		}
		else if(get<0>(Wants[i]) == '-')
		{
			i64 iceCreamMinus = get<1>(Wants[i]);

			if (icecream < iceCreamMinus)
			{
				++dchildren;
			}
			else
			{
				icecream -= iceCreamMinus;
			}
		}
	}
}

int main()
{
	GetInput();

	GiveIceCream();

	cout << icecream << ' ' << dchildren;

	return 0;
}

#endif // P_17_C




