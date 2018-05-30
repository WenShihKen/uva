#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
using namespace std;

int all[5] = {}, visit[5] = {};
bool check;

void dfs(int in1, int in2) {
	if (in1 == 5 && in2 == 23) {
		check = true;
		return;
	}
	for (int i = 0; i < 5; i++) {
		if (visit[i] == 0) {
			visit[i] = 1;
			dfs(in1 + 1, in2 + all[i]);
			dfs(in1 + 1, in2 - all[i]);
			dfs(in1 + 1, in2 * all[i]);
			visit[i] = 0;
		}
	}
}

int main()
{
	while (cin >> all[0] >> all[1] >> all[2] >> all[3] >> all[4]) {
		if (all[0] == 0 && all[1] == 0 && all[2] == 0 && all[3] == 0 && all[4] == 0)
			break;
		fill(visit, visit + 5, 0);
		check = false;
		for (int i = 0; i < 5; i++) {
			visit[i] = 1;
			dfs(1, all[i]);
			visit[i] = 0;
		}
		if (check) {
			printf("Possible\n");
		}
		else {
			printf("Impossible\n");
		}
	}
}
