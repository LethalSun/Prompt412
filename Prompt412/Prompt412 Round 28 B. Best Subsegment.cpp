//#define P_28_B

#ifdef P_28_B
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
	cin >> n;

	vector<int> arr;

	int max = 0;

	for (int i = 0; i < n; ++i)
	{
		int tempNum;

		cin >> tempNum;

		arr.push_back(tempNum);

		if (max < tempNum)
		{
			max = tempNum;
		}
	}

	bool isMax = false;

	int maxlenPre = 0;

	int maxlenCur = 0;

	int maxlenAns = 1;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == max)
		{
			if (isMax == true)
			{
				++maxlenCur;
			}
			else
			{
				isMax = true;
				maxlenCur = 1;
			}


		}
		else
		{
			isMax = false;
		}

		if (maxlenAns < maxlenCur)
		{
			maxlenAns = maxlenCur;
		}
	}

	cout << maxlenAns;

	return 0;
}
#endif