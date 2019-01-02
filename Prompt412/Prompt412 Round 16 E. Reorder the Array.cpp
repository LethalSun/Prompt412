//#define P_16_E

#ifdef P_16_E
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

int ArrayLen = 0;

vector<i64> Arr;

void Getinput()
{
	cin >> ArrayLen;

	i64 elem;

	for (int i = 0; i < ArrayLen; ++i)
	{

		cin >> elem;
		Arr.push_back(elem);
	}
}

int main()
{
	Getinput();

	//어차피 서로 위치를 바꾸는 것 이므로 정렬하고 순서를 바꾼후 원래 배열에 1대1 대응시킨 위치로 변경해줘도 동일하므로 정렬하고 생각한다.
	sort(Arr.begin(), Arr.end());

	//a<=b<=c<=d<=e<=f<=g
	//d<=e<=f<=g
	//만약 e==b b==c==d==e e<b일수는 없음.

	//가장 작은 수위치에는 넣을수 있는 큰 수 중에서 가장 작은것을 넣는것이 좋다. 즉 옮기기 시작하는 수를 변경하면서 순서대로 옮겼을때 최대가 되는 위치를 찾아 주면 된다.
	//옮길 숫자가 원래 숫자 보다 작다면 당연히 그 옮길 수보다 작은 수는 
	int low = 0;
	int high = ArrayLen - 1;
	int ans = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		bool isAllBig = true;

		for (int i = 0; i < mid; ++i)
		{
			if (Arr[i] == Arr[ArrayLen - mid + i])
			{
				isAllBig = false;
				break;
			}
		}

		if (isAllBig)
		{
			low = mid + 1;
			ans = mid;
		}
		else
		{
			high = mid - 1;
		}
	}

	cout << ans;

}
#endif