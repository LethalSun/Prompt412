//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <bitset>
//#include <map>
//#include <set>
//#include <tuple>
//#include <string.h>
//#include <math.h>
//#include <random>
//#include <functional>
//#include <assert.h>
//#include <math.h>
//
//using namespace std;
//
//using i64 = long long int;
//using ii = pair<int, int>;
//using ii64 = pair<i64, i64>;
//
//long long Factorial(long long n)
//{
//
//}
//
//int main()
//{
//	i64 n;
//	cin >> n;
//	int BaseCount = 0;
//	vector<int> digitCount(10, 0);
//	if (n == 0)
//	{
//		++digitCount[0];
//		++BaseCount;
//	}
//
//	while (n != 0)
//	{
//		int num;
//		
//		num = n % 10;
//		++digitCount[num];
//		if (digitCount[num] == 1)
//		{
//			++BaseCount;
//		}
//		n /= 10;
//	}
//
//	
//	for (auto n : digitCount)
//	{
//		cout << n;
//	}
//
//	cout << '\n';
//	cout << BaseCount;
//
//}