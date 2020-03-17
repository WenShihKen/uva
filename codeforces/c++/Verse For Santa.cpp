/**
 *  @judge CodeForces
 *  @id 1279B
 *  @name Verse For Santa
 *  @contest Educational Codeforces Round 79
 * 
 *  @tag Math
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <cmath>
typedef long long int ll;
using namespace std;
int a[100005] = {};
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--)
	{
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		bool f = false;
		int rec = 0;
		for (int i = 1; i <= n; i++)
		{
			m -= a[i];
			if (!f && m < 0)
			{
				m += a[i];
				f ^= 1;
			}
			if (f && m < 0)
			{
				break;
			}
			if (a[rec] < a[i])
			{
				rec = i;
			}
			if (!f && i == n)
			{ //總和小於m
				rec = 0;
			}
		}
		cout << rec << endl;
	}
}