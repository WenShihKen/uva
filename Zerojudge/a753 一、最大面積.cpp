#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;
int n, m;
int all[35][35] = {};
bool check[35][35] = {};
int ans[10] = {};

int x[4] = { -1,0,1,0 };
int y[4] = { 0,-1,0,1 };
int temp = 0;

void dfs(int find, int i, int j) {
	check[i][j] = true;
	temp++;
	ans[find] = max(temp, ans[find]);
	for (int pos = 0; pos < 4; pos++) {
		int t1 = i + x[pos], t2 = j + y[pos];
		if (t1 >= 1 && t1 <= n&&t2 >= 1 && t2 <= m&&all[t1][t2] == find&&check[t1][t2] == false) {
			dfs(find, t1, t2);
			
		}
	}
	
}

int main()
{

	while (scanf("%d%d", &n, &m) != EOF) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				all[i][j] = -999;
				check[i][j] = false;
			}
		}
		fill(ans, ans + 10, 0);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> all[i][j];
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (check[i][j] == false) {
					temp = 0;
					dfs(all[i][j], i, j);
				}
			}
		}

		int in1;
		cin >> in1;
		while (in1--) {
			int find;
			cin >> find;
			if (ans[find] < 2) {
				cout << 0 << endl;
				continue;
			}
			cout << ans[find] << endl;
		}
	}
}
/*
5 7
1 1 1 4 1 1 1
1 2 2 3 1 3 1
1 2 3 3 3 1 1
2 2 3 3 2 2 2
4 3 2 2 1 2 2
*/
