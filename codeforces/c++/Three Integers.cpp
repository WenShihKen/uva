/*
    Author: Ken
    Problems: 1311D
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int ans = 999999999, aa = 0, bb = 0, cc = 0;
		for (int ta = 1; ta <= 2 * a; ta++)
		{
			for (int tb = ta; tb <= 2 * b; tb += ta)
			{
				for (int tc = tb; tc <= 2 * c; tc += tb)
				{
					//printf("%d %d %d\n",ta,tb,tc);
					if (ans > abs(a - ta) + abs(b - tb) + abs(c - tc))
					{
						aa = ta, bb = tb, cc = tc;
						ans = abs(a - ta) + abs(b - tb) + abs(c - tc);
					}
				}
			}
		}
		printf("%d\n", ans);
		printf("%d %d %d\n", aa, bb, cc);
	}
}
