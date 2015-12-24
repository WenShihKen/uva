#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int w, h, n;
	while (cin >> w >> h >> n) {
		bool temp[505][505] = {};
		if (w == 0 && h == 0 && n == 0)
			break;

		for (int i = 0; i < 504; i++) {
			for (int j = 0; j < 504; j++) {
				temp[i][j] = false;
			}
		}
		int x1, y1, x2, y2, allpoint = w*h;
		for (int i = 0; i < n; i++) {
			cin >> x1 >> y1 >> x2 >> y2;
			int l1, l2, r1, r2;
			l1 = x1 <= x2 ? x1 : x2;
			l2 = y1 <= y2 ? y1 : y2;
			r1 = x1 >= x2 ? x1 : x2;
			r2 = y1 >= y2 ? y1 : y2;
			//printf("point:%d %d %d %d\n");
			for (int j = l2; j <= r2; j++) {
				for (int k = l1; k <= r1; k++) {
					if (!temp[j][k]) {
						temp[j][k] = true;
						allpoint--;
					}
				}
			}
		}
		//getchar();
		if (allpoint == 0) {
			printf("There is no empty spots.\n");
		}
		else if (allpoint == 1) {
			printf("There is one empty spot.\n");
		}
		else {
			printf("There are %d empty spots.\n", allpoint);
		}
	}
}