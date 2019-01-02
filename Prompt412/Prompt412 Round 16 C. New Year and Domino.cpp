//#define P_16_C

#ifdef P_16_C
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

int h = 0;
int w = 0;

vector<string> grid;

int queryNum = 0;

vector<vector<int>> query;

vector<vector<int>> verticalSum;
vector<vector<int>> horizontalSum;

void GetInput()
{
	scanf("%d", &h);
	scanf("%d", &w);

	char* buff = new char[w+1];

	vector<int> tempSum(w+1);

	grid.push_back(string(w+2, '#'));
	verticalSum.push_back(tempSum);


	for (int row = 0; row < h; ++row)
	{
		scanf("%s", buff);
		grid.push_back('#' + string(buff) + '#');

		verticalSum.push_back(tempSum);
		horizontalSum.push_back(tempSum);
	}

	horizontalSum.push_back(tempSum);
	grid.push_back(string(w+2, '#'));


	scanf("%d", &queryNum);

	for (int q = 0; q < queryNum; ++q)
	{
		int a, b, c, d;

		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		scanf("%d", &d);

		vector<int> temp;

		temp.push_back(a);
		temp.push_back(b);
		temp.push_back(c);
		temp.push_back(d);

		query.push_back(temp);
	}

	return;
}

void sumVertical(vector<vector<int>>& table)
{
	for (size_t row = 1; row < table.size(); ++row)
	{
		for (size_t col = 1; col < table[1].size(); ++col)
		{
			table[row][col] += table[row - 1][col];
		}
	}
}

void sumHorizontal(vector<vector<int>>& table)
{
	for (size_t row = 1; row < table.size(); ++row)
	{
		for (size_t col = 1; col < table[1].size(); ++col)
		{
			table[row][col] += table[row][col - 1];
		}
	}
}

void CountVertical()
{
	for (int i = 1; i < h + 1; ++i)
	{
		for (int j = 1; j < w + 1; ++j)
		{
			if ((grid[i][j] == '.') && (grid[i - 1][j] == '.'))
			{
				verticalSum[i][j] = 1;
			}
		}
	}

	sumHorizontal(verticalSum);
	sumVertical(verticalSum);
	
}

void CountHorizontal()
{
	for (int i = 1; i < h + 1; ++i)
	{
		for (int j = 1; j < w + 1; ++j)
		{
			if ((grid[i][j] == '.') && (grid[i][j-1] == '.'))
			{
				horizontalSum[i][j] = 1;
			}

		}
	}

	sumHorizontal(horizontalSum);
	sumVertical(horizontalSum);
}



int main()
{
	GetInput();

	CountVertical();
	CountHorizontal();

	vector<int> ans;

	for (auto q : query)
	{
		int Right = q[3];
		int Bottom = q[2];
		int Left = q[1];
		int Top = q[0];

		int sumVRB = verticalSum[Bottom][Right];

		int sumVRT = verticalSum[Top][Right];

		int sumVLB = verticalSum[Bottom][Left - 1];

		int sumVLT = verticalSum[Top][Left - 1];

		int vans = sumVRB - sumVRT - sumVLB + sumVLT;

		int sumHRB = horizontalSum[Bottom][Right];

		int sumHRT = horizontalSum[Top - 1][Right];

		int sumHLB = horizontalSum[Bottom][Left];

		int sumHLT = horizontalSum[Top - 1][Left];

		int hans = sumHRB - sumHRT - sumHLB + sumHLT;

		ans.push_back(vans + hans);
	}

	for (int a = 0; a < queryNum; ++a)
	{
		printf("%d\n", ans[a]);
	}
	return 0;
}

#endif // P_16_C
