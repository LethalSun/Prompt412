//#define P_20_D

#ifdef P_20_D
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

struct myvector
{
	int x;
	int y;
};

int main()
{
	myvector p1, p2, p3;
	cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;



	myvector p12;
	p12.x = p2.x - p1.x;
	p12.y = p2.y - p1.y;

	myvector p23;
	p23.x = p3.x - p2.x;
	p23.y = p3.y - p2.y;
	myvector p31;
	p31.x = p1.x - p3.x;
	p31.y = p1.y - p3.y;

	//p1
	myvector p41; 
	p41.x = p1.x + p12.x - p31.x;
	p41.y = p1.y + p12.y - p31.y;
	//p2
	myvector p42;
	p42.x = p2.x - p12.x + p23.x;
	p42.y = p2.y - p12.y + p23.y;
	//p3
	myvector p43;
	p43.x = p3.x - p23.x + p31.x;
	p43.y = p3.y - p23.y + p31.y;

	int i = 3;

	cout << i<<endl;
	cout << p41.x << ' ' << p41.y << endl;



	cout << p42.x << ' ' << p42.y << endl;



	cout << p43.x << ' ' << p43.y<<endl;


	return 0;
}

#endif // P_20_D
