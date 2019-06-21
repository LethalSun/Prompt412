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
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<int> arr;
//	vector<int> arr2(n, 0);
//	int maxi = 0;
//	int mx = 0;
//
//
//	for (int i = 0; i < n; ++i)
//	{
//		int tempNum;
//		cin >> tempNum;
//
//		arr.push_back(tempNum);
//
//		if (tempNum > mx)
//		{
//			mx = tempNum;
//		}
//
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (arr[i] == mx)
//		{
//			arr2[i] == 1;
//		}
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		if((arr2[i] ==1)|
//	}
//	return 0;
//
//}

//struct point
//{
//	double x;
//	double y;
//};
//
//vector<point> biggestYForEachX(1001,0);
//
//
//bool checkcolide(point c1, point c2)
//{
//
//}
//
//int main()
//{
//}

//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	vector<int> arr;
//	
//	int beforeA = a;
//	bool check = false;
//	
//	for (int i = 0; i < 1000000; ++i)
//	{
//		if (a>=b)
//		{
//			arr.push_back(a / b);
//			a = a % b;
//			check = false;
//		}
//		else
//		{
//			a *= 10;
//			if (check == true)
//			{
//				arr.push_back(0);
//			}
//			else
//			{
//				check = true;
//			}
//		}
//	
//	}
//	
//	int n = 0;
//	for (auto i : arr)
//	{
//		
//		if (i == c)
//		{
//			cout << n+1;
//			return 0;
//		}
//		++n;
//	}
//	
//	cout << -1;
//
//	//double f = a / b;
//	//int temp = -1;
//	//for (int i= 0; i < 1000000000; ++i)
//	//{
//	//	f *= 10;
//	//	temp = f;
//	//	int mod10 = temp % 10;
//	//	if (c == mod10)
//	//	{
//	//		cout << i + 1;
//	//		return 0;
//	//	}
//	//}
//
//	//cout << -1;
//
//	return 0;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<int> arr;
//	vector<int> arrsum;
//	for (int i = 0; i < n; ++i)
//	{
//		int tempnum;
//		cin >> tempnum;
//
//		arr.push_back(tempnum);
//		arrsum.push_back(tempnum);
//		if (i > 0)
//		{
//			arrsum[i] += arrsum[i-1]
//		}
//	}
//
//	int f = -1;
//	int r = -1;
//
//	i64 sum = arr[0];
//	while (f <= r)
//	{
//		
//	}
//}
//
//int main()
//{
//	int n;
//	string encoded;
//	cin >> n>>encoded;
//
//	string origin;
//
//	origin = encoded[0];
//
//	for (int i = 1; i < n; ++i)
//	{
//		if (n % 2 == 1)
//		{
//			if (i % 2 == 1)
//			{
//				origin = encoded[i] + origin;
//			}
//			else
//			{
//				origin += encoded[i];
//			}
//		}
//		else
//		{
//			if (i % 2 == 1)
//			{
//				origin += encoded[i];
//			}
//			else
//			{
//				origin = encoded[i] + origin;
//
//			}
//		}
//
//	}
//	
//
//	cout << origin;
//
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> arr;
//	int temp;
//
//	i64 max = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> temp;
//		max += temp;
//		arr.push_back(temp);
//	}
//
//	int m;
//	cin >> m;
//	vector<int> arrq;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> temp;
//
//		arrq.push_back(temp);
//	}
//
//	sort(arr.begin(), arr.end(), greater<int>());
//
//	for (auto q : arrq)
//	{
//		cout << max - arr[q - 1]<<endl;
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<vector<int>> arr;
//
//	for (int i = 0; i < n; ++i)
//	{
//		int temp[6];
//		vector<int> ar;
//		arr.push_back(ar);
//
//		for (int j = 0; j < 6; ++j)
//		{
//			cin >> temp[j];
//			arr[i].push_back(temp[j]);
//		}
//
//	}
//
//	vector<int> arr2;
//	for(int i = 6)
//
//	for (int i = 1; i < 1000; ++i)
//	{
//
//	}
//}



//int main()
//{
//	int n, x;
//	cin >> n >> x;
//
//
//	int iarr[100001];
//
//	vector<int> arr1;
//	vector<int> arr;
//	int temp;
//	int tempnp;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> temp;
//		iarr[temp] = i;
//		tempnp = temp;
//		tempnp = tempnp & x;
//		arr.push_back(temp);
//		arr1.push_back(tempnp);
//	}
//
//	sort(arr.begin(), arr.end());
//
//	for (int i = 0; i < n-1; ++i)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			cout << 0;
//			return 0;
//		}
//
//	}
//
//	for (unsigned int i = 0; i < n; ++i)
//	{
//		if (iarr[arr1[i]] != i)
//		{
//			cout << 1;
//			return 0;
//		}
//	}
//
//	sort(arr1.begin(), arr1.end());
//	for (int i = 0; i < n - 1; ++i)
//	{
//		if (arr1[i] == arr1[i + 1])
//		{
//			cout << 2;
//			return 0;
//		}
//	}
//
//	cout << -1;
//	return 0;
//}
//struct vou
//{
//	int l;
//	int r;
//	bool isOn = false;
//};
//
//int main()
//{
//	int n, r;
//	cin >> n >> r;
//	vector<vou> vous;
//	for (int i = 1; i <= n; ++i)
//	{
//		vou temp;
//		int light;
//		cin >> light;
//		if (light == 1)
//		{
//			temp.l = i - r + 1;
//			temp.r = i + r - 1;
//			vous.push_back(temp);
//		}
//	}
//
//	vector<int> room(n, 0);
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (room[i] != 0)
//		{
//			continue;
//		}
//
//		for (auto v : vous)
//		{
//			if (v.l <= i+1 || v.r >= i+1)
//			{
//				v.isOn = true;
//				break;
//			}
//		}
//	}
//
//	int c = 0;
//	for (auto v : vous)
//	{
//		if (v.isOn == true)
//		{
//			++c;
//		}
//	}
//	cout << c;
//	return 0;
//}

//int main()
//{
//	int n, d,m;
//	cin >> n >> d>>m;
//
//	vector<int> inside;
//	for (int i = 0; i < m; ++i)
//	{
//		int x, y;
//		cin >> x >> y;
//
//
//		bool isInside = true;
//
//		if (y - x > d)//ÁÂ»ó
//		{
//			isInside = false;
//		}
//		if (y - x < -d)//¿ìÇÏ
//		{
//			isInside = false;
//		}
//		if (x + y < d)//ÁÂÇÏ
//		{
//			isInside = false;
//		}
//		if (y + x > n + n - d)//¿ì»ó
//		{
//			isInside = false;
//		}
//
//		if (isInside == true)
//		{
//			inside.push_back(1);
//		}
//		else
//		{
//			inside.push_back(0);
//		}
//	}
//
//	for (int i = 0; i < m; ++i)
//	{
//		if (inside[i] == 0)
//		{
//			cout << "NO\n";
//		}
//		else
//		{
//			cout << "YES\n";
//		}
//	}
//
//	return 0;
//}
//struct vou
//{
//	int l;
//	int r;
//	int cost;
//	int dur;
//};
//
//int main()
//{
//	int n, dur;
//	cin >> n >> dur;
//
//	for(int)
//}
//int main()
//{
//	int dotCount;
//	cin >> dotCount;
//
//	int xi = 0;
//	int yi = 0;
//
//	int max = 0;
//
//	for (int i = 0; i < dotCount; ++i)
//	{
//		int tempX, tempY = 0;
//
//		cin >> tempX >> tempY;
//
//		int tempMax = tempX + tempY;
//
//		if (max < tempMax)
//		{
//			max = tempMax;
//			xi = tempX;
//			yi = tempY;
//		}
//	
//	}
//
//	cout << xi + yi;
//
//	return 0;
//
//}
//
//int main()
//{
//	int n;
//	vector<int> lens;
//
//	cin >> n;
//
//	int sum =0;
//
//	int min = 0;
//	int max = INT_MAX;
//
//	for (int i = 0; i < n; ++i)
//	{
//		int temp;
//
//		cin >> temp;
//		lens.push_back(temp);
//
//		min = min(temp,min);
//	}
//	int ave = sum / n; 
//	sort(lens.begin(), lens.end());
//
//	int mid[3] = { ave-1,ave,ave+1 };
//	int ans[3] = { 0, };
//
//	for (auto len : lens)
//	{
//		ans[0] += abs(len - mid[0]);
//		ans[1] += abs(len - mid[1]);
//		ans[2] += abs(len - mid[2]);
//	}
//
//	cout << min(ans[2], min(ans[1], ans[0]));
//
//	return 0;
//}
//
//int main()
//{
//	double n, r;
//	cin >> n >> r;
//
//	double degree = 360.0 / (2.0 * n);
//	
//
//	double rad = (degree*3.14159265358979323846) / 180.0;
//
//
//	double nr = (sin(rad)*r) / (1.0 - sin(rad));
//
//	cout << fixed;
//	cout.precision(7);
//	cout << nr;
//
//	return 0;
//}

//int main()
//{
//	string str;
//	cin >> str;
//	int len = str.length();
//	
//
//	vector<string> distinctstr;
//
//	distinctstr.push_back(str);
//
//	str += str;
//
//	for (int i = 1; i < len; ++i)
//	{
//		string curstr = str.substr(i, len);
//		bool isSame = false;
//		for (auto s : distinctstr)
//		{
//			if (curstr.compare(s) == 0)
//			{
//				isSame = true;
//			}
//		}
//
//		if (isSame == false)
//		{
//			distinctstr.push_back(curstr);
//		}
//	}
//
//	cout << distinctstr.size();
//
//	return 0;
//}