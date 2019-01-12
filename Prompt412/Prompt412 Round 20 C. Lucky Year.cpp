//#define P_20_C

#ifdef P_20_C
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
	i64 n;
	cin >> n;

	i64 nn = n;

	int digit = 0;

	int not0 = 0;

	i64 firstdigit = 0;

	while (nn != 0)
	{
		++digit;
		int c = nn % 10;

		if (c != 0)
		{
			++not0;
		}

		firstdigit = nn;
		
		nn /= 10;
	}

	++firstdigit;

	i64 nnn = 1;

	for (int i = 1; i < digit; ++i)
	{
		firstdigit *= 10;
		nnn *= 10;
	}



	if (not0 == 1)
	{
		cout << nnn;
	}
	else
	{
		cout<<firstdigit - n;
	}

	//cout << digit;

}

#endif // P_20_C
