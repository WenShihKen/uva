#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<string.h>
#include<map>
using namespace std;
int n, m;
int start, endpoint;
bool visit[805] = {};
vector<int>graph[805];

void dfs(int s) {
	for (int i = 0; i != graph[s].size(); i++) {
		if (visit[graph[s][i]] == false) {
			visit[graph[s][i]] = true;
			dfs(graph[s][i]);
		}
	}
}

int main() {
	while (scanf("%d%d", &n, &m) != EOF) {
		for (int i = 0; i < 803; i++) {
			visit[i] = false;
			graph[i].clear();
		}
		for (int i = 0; i < m; i++) {
			int t1, t2;
			scanf("%d%d", &t1, &t2);
			graph[t1].push_back(t2);
		}
		scanf("%d%d", &start, &endpoint);
		dfs(start);
		if (visit[endpoint])
			puts("Yes!!!");
		else
			puts("No!!!");
	}
}
