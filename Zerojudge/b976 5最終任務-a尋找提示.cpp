#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

struct p {
	int x, y;
};

int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		vector<p>pos(n);
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &pos[i].x, &pos[i].y);
		}
		for (int i = 0; i < m; i++) {
			int a, b;
			int max_dis = 2147483647, ans = 0;
			scanf("%d%d", &a, &b);
			for (int i = 0; i < n; i++) {
				int dis = abs(a - pos[i].x)*abs(a - pos[i].x) + abs(b - pos[i].y)*abs(b - pos[i].y);
				if (dis < max_dis) {
					max_dis = dis;
					ans = i + 1;
				}
			}
			printf("%d\n", ans);
		}
	}
}
