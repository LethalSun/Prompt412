//#define P_19_D

#ifdef P_19_D
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

string inputString;

struct latterCountSums
{
	int SumOfA = 0;
	int SumOfB = 0;
};



int main()
{
	cin >> inputString;

	vector<latterCountSums> sumArray;

	int currentACount = 0;

	int CurrentBCount = 0;

	bool isAContinued = false;

	char latterSaved = 'c';

	int ans = 0;

	for (int i = 0; i < inputString.length(); ++i)
	{
		if (latterSaved != inputString[i])
		{
			latterCountSums tempSum{ currentACount,CurrentBCount };

			sumArray.push_back(tempSum);

		}

		if (inputString[i] == 'a')
		{
			++currentACount;
		}
		else
		{
			++CurrentBCount;
		}

		latterSaved = inputString[i];
	}

	latterCountSums allsum{ currentACount,CurrentBCount };

	sumArray.push_back(allsum);

	//case aaa... or bbb...///pick no between

	//ans = max(currentACount, CurrentBCount);

	//case aaa...bbb... or bbb...aaa... ///pick 1 between

	for (int i = 0; i < sumArray.size(); ++i)
	{
		//aaa...bbb...or bbb... when i == 0 or aaa... when i == end

		int tempans1 = sumArray[i].SumOfA + sumArray.back().SumOfB - sumArray[i].SumOfB;

		//bbb...aaa... or aaa... when i == 0 or bbb... when i == end

		int tempans2 = sumArray[i].SumOfB + sumArray.back().SumOfA - sumArray[i].SumOfA;

		int tempmax = max(tempans1, tempans2);

		ans = max(tempmax, ans);
	}

	//case aaa...bbb...aaa...///pick 2 between

	for (int i = 0; i < sumArray.size() - 1; ++i)
	{
		for (int j = i + 1; j < sumArray.size(); ++j)
		{
			int tempans = sumArray[i].SumOfA + sumArray[j].SumOfB - sumArray[i].SumOfB + sumArray.back().SumOfA - sumArray[j].SumOfA;

			ans = max(tempans, ans);
		}
	}

	cout << ans;
}
#endif // P_19_D