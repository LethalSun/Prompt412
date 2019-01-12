#define P_17_D
#define _CRT_SECURE_NO_WARNINGS

#ifdef P_17_D
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

struct Programer
{
	int id;

	int rank;

	vector<Programer*> QuarrelProgramerLowRank;
};

int numP;

int numQ;

vector<Programer> BerSoft;
struct rankCount
{
	int rank;

	int countOfLowerRank;

	int countOfCurRank;
};

vector<rankCount> rankC;

void getinput()
{
	scanf("%d", &numP);
	scanf("%d", &numQ);

	for (int i = 0; i < numP; ++i)
	{
		Programer p;
		p.id = i + 1;

		scanf("%d", &p.rank);

		BerSoft.push_back(p);
	}

	for (int i = 0; i < numQ; ++i)
	{
		int index1;
		scanf("%d", &index1);
		int index2;
		scanf("%d", &index2);

		if (BerSoft[index1 - 1].rank > BerSoft[index2 - 1].rank)
		{
			BerSoft[index1 - 1].QuarrelProgramerLowRank.push_back(&BerSoft[index2 - 1]);
		}
		else if (BerSoft[index1 - 1].rank < BerSoft[index2 - 1].rank)
		{
			BerSoft[index2 - 1].QuarrelProgramerLowRank.push_back(&BerSoft[index1 - 1]);
		}
		else//== do notthing
		{
		}


	}

}

int main()
{
	getinput();

	sort(BerSoft.begin(), BerSoft.end(), [](const Programer& a, const Programer& b)->bool {return a.rank < b.rank; });

	int currank = 1;

	rankCount rcI;

	rcI.rank = 1;
	rcI.countOfLowerRank = 0;
	rcI.countOfCurRank = 0;
	rankC.push_back(rcI);

	for (auto p : BerSoft)
	{
		if (currank != p.rank)
		{
			rankCount rc{ 0,0,0 };

			rc.rank = p.rank;

			rc.countOfCurRank = 1;

			int LastIndex = rankC.size() - 1;

			rc.countOfLowerRank += rankC.back().countOfLowerRank + rankC.back().countOfCurRank;

			rankC.push_back(rc);

			currank = p.rank;
		}
		else
		{
			++rankC.back().countOfCurRank;
		}
	}


	for (auto p : BerSoft)
	{
		int rank = p.rank;

		int hi = rankC.size() - 1;

		int lo = 0;

		int mid = 0;

		while (hi >= lo)
		{
			mid = (lo + hi) / 2;
			if (rankC[mid].rank < rank)
			{
				lo = mid + 1;

			}
			else
			{
				hi = mid - 1;
			}

		}

		cout << rankC[mid].countOfLowerRank - p.QuarrelProgramerLowRank.size() << ' ';
	}

}

#endif // P_17_D