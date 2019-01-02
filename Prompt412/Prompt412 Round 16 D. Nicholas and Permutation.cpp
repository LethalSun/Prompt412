//#define P_16_D

#ifdef P_16_D
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

int arrlen = 0;

int pos1 = 0;
int posn = 0;

void Getinput()
{
	cin >> arrlen;

	int n = 0;

	for (int i = 0; i < arrlen; ++i)
	{
		cin >> n;

		if (n == 1)
		{
			pos1 = i;
		}
		else if (n == arrlen)
		{
			posn = i;
		}
	}
}

int main()
{
	Getinput();

	if (pos1 <= posn)
	{
		cout << max(posn, arrlen - 1 - pos1);
	}
	else
	{
		cout << max(pos1, arrlen - 1 - posn);
	}
	
	return 0;

}
#endif