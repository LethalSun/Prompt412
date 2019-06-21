//#define P_17_E

#ifdef P_17_E
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

string digit;

void GetInput()
{
	cin >> digit;
}

bool Is4n(int n1, int n10 = 0)
{
	if (n10 % 2 == 0)
	{
		if (n1 % 4 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (n1 == 2 || n1 == 6)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


int main()
{
	GetInput();
	
	int strlenth = digit.size();

	i64 ans = 0;

	for (int i = strlenth-1; i > -1; --i)
	{
		int n1 = digit[i] - '0';
		
		int n10 = 0;

		if (i > 0)
		{
			n10 = digit[i - 1] - '0';

			if (Is4n(n1, n10) == true)
			{
				ans += 1;
				ans += i - 1;
			}
		}


		if (Is4n(n1) == true)
		{
			ans += 1;
		}

	}

	cout << ans;
}
#endif // P_17_E
