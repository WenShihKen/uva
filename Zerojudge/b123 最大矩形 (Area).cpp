#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		int temp[205][205] = {}, rec[205][205] = {};
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				scanf("%d", &temp[i][j]);
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (temp[i][j]) {
					rec[i][j] = rec[i][j - 1] + 1;
				}
			}
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				int t = 99999;
				for (int k = 1; i - k >= 0, rec[i - k + 1][j] > 0; k++) {
					t = min(t, rec[i - k + 1][j]);
					ans = max(t*k, ans);
				}
			}
		}
		printf("%d\n", ans);
	}
}
