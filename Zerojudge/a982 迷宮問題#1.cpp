#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
char all[105][105] = {};
int in1;
int sx = 1, sy = 1;
int gx, gy;
int dis[105][105] = {};
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
typedef pair<int, int> P;

int bfs() {
	queue<P>que;
	que.push(P(sx, sy));
	dis[sx][sy] = 0;
	while (que.size()) {
		P temp = que.front();
		que.pop();
		if (temp.first == gx&&temp.second == gy)
			break;
		for (int i = 0; i < 4; i++) {
			int nx = temp.first + dx[i], ny = temp.second + dy[i];
			if (nx >= 0 && nx < in1&&ny >= 0 && ny < in1&&all[nx][ny] != '#'&&dis[nx][ny] == 999999) {
				que.push(P(nx, ny));
				dis[nx][ny] = dis[temp.first][temp.second] + 1;
			}
		}
	}
	return dis[gx][gy];
}

int main()
{
	while (cin >> in1) {
		gx = in1 - 2, gy = in1 - 2;
		for (int i = 0; i < 103; i++) {
			for (int j = 0; j < 103; j++) {
				all[i][j] = 0;
				dis[i][j] = 999999;
			}
		}
		for (int i = 0; i < in1; i++) {
			for (int j = 0; j < in1; j++) {
				cin >> all[i][j];
			}
		}
		if (bfs() == 999999) {
			cout << "No solution!\n";
		}
		else {
			cout << bfs() + 1 << endl;
		}
	}
}
