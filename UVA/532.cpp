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

char map[35][35][35] = {};
int dis[35][35][35] = {}, ans = 9999999;
int dir_l[6] = { -1,1,0,0,0,0 };
int dir_r[6] = { 0,0,-1,1,0,0 };
int dir_c[6] = { 0, 0, 0, 0, -1, 1 };
int L, R, C;

struct point {
	int l, r, c;
};

void bfs(int l, int r, int c) {
	queue<point>que;
	que.push(point{ l,r,c });
	map[l][r][c] = '#';
	point now, next;
	while (!que.empty()) {
		now = que.front();
		que.pop();
		for (int i = 0; i < 6; i++) {
			next.l = now.l + dir_l[i];
			next.r = now.r + dir_r[i];
			next.c = now.c + dir_c[i];
			if (next.l >= 1 && next.l <= L&&next.r >= 1 && next.r <= R&&next.c >= 0 && next.c <= C) {
				if (map[next.l][next.r][next.c] != '#') {
					dis[next.l][next.r][next.c] = dis[now.l][now.r][now.c] + 1;
					if (map[next.l][next.r][next.c] == 'E') {//terminal
						ans = min(ans, dis[next.l][next.r][next.c]);
					}
					map[next.l][next.r][next.c] = '#';
					que.push(next);
				}
			}
		}
	}
}

int main() {
	while (cin >> L >> R >> C) {
		if (L == 0 && R == 0 && C == 0)
			break;
		ans = 9999999;
		//
		for (int i = 0; i < 35; i++)
			for (int j = 0; j < 35; j++)
				for (int k = 0; k < 35; k++) {
					dis[i][j][k] = 0;
					map[i][j][k] = 0;
				}
		//
		int start_l, start_r, start_c;
		for (int i = 1; i <= L; i++) {
			for (int j = 1; j <= R; j++) {
				for (int k = 1; k <= C; k++) {
					cin >> map[i][j][k];
					if (map[i][j][k] == 'S') {
						start_l = i, start_r = j, start_c = k;
					}
				}
			}
			string trash;
			getline(cin, trash);
		}
		bfs(start_l, start_r, start_c);
		if (ans == 9999999)
			printf("Trapped!\n");
		else
			printf("Escaped in %d minute(s).\n", ans);
	}
}
/*
3 4 5
S....
.###.
.##..
###.#

#####
#####
##.##
##...

#####
#####
#.###
####E

1 3 3
S##
#E#
###

0 0 0
*/