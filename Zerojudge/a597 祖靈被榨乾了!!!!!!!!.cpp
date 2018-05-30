#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
using namespace std;

char map[505][505] = {};
int m, n, area;
void dfs(int x, int y, int &value) {
	if (x >= 0 && x <= m&&y >= 0 && y <= n&&map[x][y] == 'J') {
		map[x][y] = 'X';
		value++;
		dfs(x + 1, y, value);
		dfs(x - 1, y, value);
		dfs(x, y + 1, value);
		dfs(x, y - 1, value);
	}
}

int main() {
	while (scanf("%d%d", &m, &n) != EOF) {
		for (int i = 1; i <= m; i++) {
			scanf("%s", map[i]);
		}
		int place = 0;
		area = 0;
		for (int i = 0; i <= m; i++) {
			for (int j = 0; j <= n; j++) {
				if (map[i][j] == 'J') {
					int value = 0;
					place++;
					dfs(i, j, value);
					area = max(value, area);
				}
			}
		}
		printf("%d %d\n", place, area);
	}
}
