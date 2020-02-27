/*
    Author: Ken
    Problems: 1311C
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, all[200005] = {}, ans[26] = {}, j = 0;
		cin >> n >> m;
		string s;
		cin >> s;
		for (int i = 0; i < m; i++)
			scanf("%d", &all[i]);
		sort(all, all + m);
		for (int i = 0; i < m; i++)
		{
			//ans[s[j]-'a']+=(m-i+1);
			for (; j < all[i]; j++)
			{
				ans[s[j] - 'a'] += (m - i);
			}
		}
		for (int i = 0; i < n; i++)
		{
			ans[s[i] - 'a'] += 1;
		}
		for (int i = 0; i < 25; i++)
		{
			printf("%d ", ans[i]);
		}
		printf("%d\n", ans[25]);
	}
}
