#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;

vector<int>node[35];
map<int, int>m;
int node_size = 0;

int bfs(int start, int TTL) {
	queue<int>q;
	q.push(m[start]);
	int visit[35] = {}, arrive = 1;
	visit[m[start]] = 1;
	while (!q.empty()) {
		int now = q.front();
		if (visit[now] > TTL)
			return node_size - arrive;
		q.pop();
		for (int i = 0; i != node[now].size(); i++) {
			if (!visit[node[now][i]]) {			
				visit[node[now][i]] = visit[now] + 1;
				q.push(node[now][i]);
				arrive++;
			}
		}
	}
	return node_size - arrive;
}

int main()
{
	int in1, count = 1;
	while (cin >> in1) {
		if (in1 == 0)
			break;
		for (int i = 0; i < 35; i++)
			node[i].clear();
		m.clear();
		node_size = 0;
		for (int i = 0; i < in1; i++) {
			int node1, node2;
			cin >> node1 >> node2;
			if (m[node1] == 0) {
				m[node1] = ++node_size;
			}
			if (m[node2] == 0) {
				m[node2] = ++node_size;
			}
			node[m[node1]].push_back(m[node2]);
			node[m[node2]].push_back(m[node1]);
		}
		int start, TTL;
		while (cin >> start >> TTL) {
			if (start == 0 && TTL == 0)
				break;
			int ans = bfs(start, TTL);
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", count++, ans, start, TTL);
		}
	}
}