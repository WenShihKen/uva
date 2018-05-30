#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m) {
		int all[30][30] = {}, ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> all[i][j];
		for (int i = 0; i < n; i++)
			sort(all[i], all[i] + m);
		for (int i = 0; i < n; i++)
			ans += all[i][m - 1];
		vector<int>div;
		for (int i = 0; i < n; i++)
			if (ans%all[i][m - 1] == 0)
				div.push_back(all[i][m - 1]);
		cout << ans << endl;
		if (div.size() == 0)
			cout << -1 << endl;
		else
			for (int i = 0; i != div.size(); i++)
				printf("%d ", div[i]);
		cout << endl;
	}
}