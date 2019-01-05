//#define P_19_E

#ifdef P_19_E
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
	string str = "0";
	string str2;
	cin >> n >> str2;
	str.append(str2).append("0");
	int con1 = 0;

	int con0 = 0;

	bool isMaximal = true;

	for (int i = 0; i < n + 2; ++i)
	{

		if (str[i] == '0')
		{
			++con0;
			con1 = 0;
		}
		else
		{
			++con1;
			con0 = 0;
		}

		if (con1 > 1 || con0 > 2)
		{
			isMaximal = false;
			cout << "No";
			break;
		}
	}

	if (isMaximal == true)
	{
		cout << "Yes";
	}

	return 0;
}
#endif // P_19_E
