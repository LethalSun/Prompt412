#define P_17_B

#ifdef P_17_B


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

//B.Delete from the Left

string s;
string t;

void GetInput()
{
	cin >> s;
	cin >> t;
}


int main()
{
	GetInput();

	int offset = 0;

	int position = 0;

	if (s.length() > t.length())
	{
		offset = s.length() - t.length();
		s = s.substr(offset);
		position = t.length() - 1;
	}
	else if (s.length() < t.length())
	{
		offset = t.length() - s.length();
		t = t.substr(offset);
		position = s.length() - 1;
	}
	else
	{
		position = s.length() - 1;
	}

	int sameStrLen = 0;

	for (int i = position; i > -1; --i)
	{
		if (s[i] != t[i])
		{
			break;
		}
		else
		{
			++sameStrLen;
		}
	}

	cout << offset + (t.length() - sameStrLen) * 2;

	return 0;
}

#endif // P_17_B
