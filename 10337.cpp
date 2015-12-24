#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int mile;
		cin >> mile;
		int wind[1010][15] = {}, ans[1010][15] = {};
		for (int i = 9; i >= 0; i--)
			for (int j = 0; j < mile / 100; j++) 
				cin >> wind[j][i];

		for (int i = 0; i < 1009; i++)
			for (int j = 0; j < 13; j++)
				ans[i][j] = 99999999;

		ans[0][0] = 0;
		for (int i = 0; i < mile / 100; i++) {
			for (int j = 0; j < 10; j++) {
				if (j + 1 < 10) {//往上
					ans[i + 1][j + 1] = min(ans[i + 1][j + 1], ans[i][j] + 60 - wind[i][j]);
				}
				if (j - 1 >= 0) {//往下
					ans[i + 1][j - 1] = min(ans[i + 1][j - 1], ans[i][j] + 20 - wind[i][j]);
				}
				ans[i + 1][j] = min(ans[i + 1][j], ans[i][j] + 30 - wind[i][j]);//平飛
			}
		}
		/*for (int j = 0; j < 10; j++) {
			for (int i = 0; i <= mile/100; i++) {
				printf("%d ", ans[i][j]);
			}
			cout << endl;
		}*/
		printf("%d\n\n", ans[mile / 100][0]);
	}
}