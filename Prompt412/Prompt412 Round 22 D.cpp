//#define P_22_D
#ifdef P_22_D
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

struct teamProblem
{

};

vector<vector<int>> problems;

int main()
{
	int p, t;
	cin >> p >> t;

	vector<int> teamproblem(4, 0);


	for (int i = p; i < p; ++i)
	{
		vector<int> temp;
		problems.push_back(temp);
		int knownPcount = 0;
		for (int j = 0; j < t; ++j)
		{
			int pp;
			cin >> pp;
			problems[i].push_back(pp);
			if (pp == 1)
			{
				++teamproblem[j];
			}

		}
	}




}
#endif // P_22_D
