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
int n, m, s_x, s_y, end_x, end_y;
int step;
char in1[105][105] = {};
int dir_x[4] = { -1,0,0,1 };
int dir_y[4] = { 0,-1,1,0 };
int dis[105][105] = {};
struct point {
	int x, y;
};

void bfs(int sx, int sy, int endx, int endy) {
	queue<point>que;
	que.push(point{ sx,sy });
	in1[sx][sy] = '1';
	point now, next;
	while (!que.empty()) {
		now = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			next.x = now.x + dir_x[i];
			next.y = now.y + dir_y[i];
			if (next.x >= 1 && next.x <= n && next.y >= 1 && next.y <= m) {
				//cout << next.x << " " << next.y << endl;
				if (in1[next.x][next.y] == '0') {
					dis[next.x][next.y] = dis[now.x][now.y] + 1;
					if (next.x == endx&&next.y == endy) {
						step = min(step, dis[next.x][next.y]);
					}
					in1[next.x][next.y] = '1';
					que.push(next);
				}
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m >> s_x >> s_y >> end_x >> end_y;
		step = 99999999;
		for (int i = 0; i < 104; i++)
			for (int j = 0; j < 104; j++) {
				in1[i][j] = 0;
				dis[i][j] = 0;
			}
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> in1[i][j];
		bfs(s_x, s_y, end_x, end_y);
		//printf("ans=");
		if (step == 99999999)
			cout << 0 << endl;
		else
			cout << step + 1 << endl;
	}
}
