#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n, r, c, k;//繼承人 ,行 ,列 ,戰爭次數
	while (cin >> n >> r >> c >> k) {
		if (n == 0 && r == 0 && c == 0 && k == 0)
			break;
		int area[105][105], update[105][105];
		for (int i = 0; i < 105; i++)//initial
			for (int j = 0; j < 105; j++)
				area[i][j] = 99999999, update[i][j] = 99999999;
		for (int i = 1; i <= r; i++)//input
			for (int j = 1; j <= c; j++)
				cin >> area[i][j];
		for (int i = 1; i <= r; i++)//更新資料
			for (int j = 1; j <= c; j++)
				update[i][j] = area[i][j];
		int round = 1;
		while (round <= k) {
			for (int i = 1; i <= r; i++) {
				for (int j = 1; j <= c; j++) {
					if (area[i][j + 1] == (area[i][j] + 1) % n) {//上
						update[i][j + 1] = area[i][j];
					}
					if (area[i][j - 1] == (area[i][j] + 1) % n) {//下
						update[i][j - 1] = area[i][j];
					}
					if (area[i - 1][j] == (area[i][j] + 1) % n) {//左
						update[i - 1][j] = area[i][j];
					}
					if (area[i + 1][j] == (area[i][j] + 1) % n) {//右
						update[i + 1][j] = area[i][j];
					}
				}
			}
			for (int i = 1; i <= r; i++)//更新資料
				for (int j = 1; j <= c; j++)
					area[i][j] = update[i][j];
			round++;
		}
		///////////////////////////////////
		for (int i = 1; i <= r; i++) {//output
			for (int j = 1; j <= c; j++) {
				printf("%d", update[i][j]);
				if (j < c) {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}