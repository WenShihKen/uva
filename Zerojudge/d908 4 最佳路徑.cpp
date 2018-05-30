#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;
char start;
int edge, max_wei;

vector<int>graph[26],wei[26];

void dfs(int s, int value)
{
	max_wei = max(value, max_wei);
	if (graph[s].size() == 0) {	
		return;
	}
	for (int i = 0; i != graph[s].size(); i++) {
		dfs(graph[s][i], value + wei[s][i]);
	}
}

int main()
{
	while (cin >> start) {
		max_wei = 0;
		for (int i = 0; i < 26; i++) {
			graph[i].clear();
			wei[i].clear();
		}
		cin >> edge;
		for (int i = 0; i < edge; i++) {
			char in1, in2;
			int weight;
			cin >> in1 >> in2 >> weight;
			graph[in1 - 'A'].push_back(in2 - 'A');
			wei[in1 - 'A'].push_back(weight);
		}
		dfs(start - 'A', 0);
		cout << max_wei << endl;
	}
}
