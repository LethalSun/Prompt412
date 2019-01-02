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

	//������ ���� ��ġ�� �ٲٴ� �� �̹Ƿ� �����ϰ� ������ �ٲ��� ���� �迭�� 1��1 ������Ų ��ġ�� �������൵ �����ϹǷ� �����ϰ� �����Ѵ�.
	sort(Arr.begin(), Arr.end());

	//a<=b<=c<=d<=e<=f<=g
	//d<=e<=f<=g
	//���� e==b b==c==d==e e<b�ϼ��� ����.

	//���� ���� ����ġ���� ������ �ִ� ū �� �߿��� ���� �������� �ִ°��� ����. �� �ű�� �����ϴ� ���� �����ϸ鼭 ������� �Ű����� �ִ밡 �Ǵ� ��ġ�� ã�� �ָ� �ȴ�.
	//�ű� ���ڰ� ���� ���� ���� �۴ٸ� �翬�� �� �ű� ������ ���� ���� 
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