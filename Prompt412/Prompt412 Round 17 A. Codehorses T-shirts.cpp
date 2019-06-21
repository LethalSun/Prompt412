//#define P_17_A
#ifdef P_17_A


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
//A. Codehorses T-shirts

int sizeCount;

enum SIZE_ENUM : int
{
	FALSE = -1,
	XXXS = 0,
	XXS = 1,
	XS = 2,
	S = 3,
	M = 4,
	L = 5,
	XL = 6,
	XXL = 7,
	XXXL = 8,

};

int PrevSizeCount[9] = { 0, };
int NextSizeCount[9] = { 0, };

int GetSizeEnum(string size)
{
	if (size.compare("XXXS") == 0)
	{
		return (int)SIZE_ENUM::XXXS;
	}
	else if (size.compare("XXS") == 0)
	{
		return (int)SIZE_ENUM::XXS;
	}
	else if (size.compare("XS") == 0)
	{
		return (int)SIZE_ENUM::XS;
	}
	else if (size.compare("S") == 0)
	{
		return (int)SIZE_ENUM::S;
	}
	else if (size.compare("M") == 0)
	{
		return (int)SIZE_ENUM::M;
	}
	else if (size.compare("L") == 0)
	{
		return (int)SIZE_ENUM::L;
	}
	else if (size.compare("XL") == 0)
	{
		return (int)SIZE_ENUM::XL;
	}
	else if (size.compare("XXL") == 0)
	{
		return (int)SIZE_ENUM::XXL;
	}
	else if (size.compare("XXXL") == 0)
	{
		return (int)SIZE_ENUM::XXXL;
	}
	else
	{
		return (int)SIZE_ENUM::FALSE;
	}

}

void Getinput()
{
	cin >> sizeCount;

	for (int i = 1; i <= 2 * sizeCount; ++i)
	{
		string size;

		if (i <= sizeCount)
		{
			cin >> size;

			int index = GetSizeEnum(size);

			PrevSizeCount[index]++;
		}
		else
		{
			cin >> size;
			int index = GetSizeEnum(size);

			NextSizeCount[index]++;
		}
	}

}

int main()
{
	Getinput();

	int XXXxCount = abs(PrevSizeCount[XXXL] - NextSizeCount[XXXL]) + abs(PrevSizeCount[XXXS] - NextSizeCount[XXXS]);
	int XXxCount = abs(PrevSizeCount[XXL] - NextSizeCount[XXL]) + abs(PrevSizeCount[XXS] - NextSizeCount[XXS]);
	int XxCount = abs(PrevSizeCount[XL] - NextSizeCount[XL]) + abs(PrevSizeCount[XS] - NextSizeCount[XS]);
	int xCount = abs(PrevSizeCount[L] - NextSizeCount[L]) + abs(PrevSizeCount[S] - NextSizeCount[S]) + abs(PrevSizeCount[M] - NextSizeCount[M]);

	int changeCount = (XXXxCount + XXxCount + XxCount + xCount) / 2;

	cout << changeCount;

}


#endif // P_17_A