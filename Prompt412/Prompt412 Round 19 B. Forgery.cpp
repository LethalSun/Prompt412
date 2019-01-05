//#define P_19_B

#ifdef P_19_B
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

int row;
int col;

vector<string> board;


bool ispartialypen(int row, int col)
{

	if ((board[row][col] == '*' || board[row][col] == '#')
		&& (board[row][col + 1] == '*' || board[row][col + 1] == '#')
		&& (board[row][col + 2] == '*' || board[row][col + 2] == '#')
		&& (board[row + 1][col] == '*' || board[row + 1][col] == '#')
		&& (board[row + 1][col + 2] == '*' || board[row + 1][col + 2] == '#')
		&& (board[row + 2][col] == '*' || board[row + 2][col] == '#')
		&& (board[row + 2][col + 1] == '*' || board[row + 2][col + 1] == '#')
		&& (board[row + 2][col + 2] == '*' || board[row + 2][col + 2] == '#'))
	{
		return true;
	}

	return false;
}

void changeSharpToStar(int row, int col)
{
	board[row][col] = '*';
	board[row][col + 1] = '*';
	board[row][col + 2] = '*';
	board[row + 1][col] = '*';
	board[row + 1][col + 2] = '*';
	board[row + 2][col] = '*';
	board[row + 2][col + 1] = '*';
	board[row + 2][col + 2] = '*';
}

int main()
{
	cin >> row >> col;

	for (int i = 0; i < row; ++i)
	{
		string s;
		cin >> s;

		board.push_back(s);
	}

	for (int i = 0; i < row - 2; ++i)
	{
		for (int j = 0; j < col - 2; ++j)
		{
			if (ispartialypen(i, j) == true)
			{
				changeSharpToStar(i, j);
			}
		}
	}

	bool possible = true;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (board[i][j] == '#')
			{
				possible = false;
				goto End;
			}
		}
	}

End:

	if (possible == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;

}
#endif // P_19_B
