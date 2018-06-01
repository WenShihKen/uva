#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int all[105][105] = {};
int visit[105] = {};
int in1;

void dfs(int n) {
	visit[n] = 1;
	for (int i = 1; i <= in1; i++) {
		if (!visit[i] && all[n][i]) {
			dfs(i);
		}
	}
}

int main()
{
	while (cin >> in1) {
		if (in1 == 0)
			break;
		for (int i = 0; i < 103; i++)
			for (int j = 0; j < 103; j++)
				all[i][j] = 0;
		getchar();
		while (1) {
			string node_list;
			getline(cin, node_list);

			stringstream ss(node_list);
			int first, others;
			ss >> first;
			if (first == 0)
				break;
			while (ss >> others) {
				all[first][others] = all[others][first] = 1;
			}
		}
		int ans = 0;
		for (int i = 1; i <= in1; i++) {
			fill(visit, visit + 103, 0);
			visit[i] = 1;
			int count_node = 0;
			for (int j = 1; j <= in1; j++) {
				if (!visit[j]) {
					dfs(j);
					count_node++;
				}
			}
			//printf("%d node count :%d\n", i, count_node);
			if (count_node > 1)
				ans++;
		}
		cout << ans << endl;
	}
}