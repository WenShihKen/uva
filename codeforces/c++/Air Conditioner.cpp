/*
    Author: Ken
    Problems: 1304C
	Tag: ad-hoc, greedy
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int in1, now;
		cin >> in1 >> now;
		int all[105][3] = {};
		for (int i = 0; i < in1; i++)
		{
			cin >> all[i][0] >> all[i][1] >> all[i][2];
		}
		bool check = true;
		int pass = 0;
		int mint = now, maxt = now;
		for (int i = 0; i < in1; i++)
		{
			mint -= all[i][0] - pass;
			maxt += all[i][0] - pass;
			//cout<<mint<<" "<<maxt<<endl;
			if (mint > all[i][2] || maxt < all[i][1])
			{ //範圍沒蓋到
				check = false;
				break;
			}
			mint = max(all[i][1], mint);
			maxt = min(all[i][2], maxt);
			pass = all[i][0];
		}
		if (check)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
.