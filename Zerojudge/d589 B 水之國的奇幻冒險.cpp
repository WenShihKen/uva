#include<stdio.h>
int map[105][105], d[105], check[105];
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int n, m;
		scanf("%d%d", &n, &m);
		int i, j, t = n;
		for (i = 1; i <= n; i++){
			for (j = 1; j <= n; j++){
				map[i][j] = 99999999;
			}
		}
		int a, b, p;
		for (i = 0; i < m; i++){
			scanf("%d%d%d", &a, &b, &p);
			map[a][b] = map[b][a] = p;
		}
		for (i = 1; i <= n; i++){
			check[i] = 0;
			d[i] = map[1][i];
		}
		check[1] = 1;
		int c = 0;
		while (t--){
			int min = 99999999;
			for (i = 1; i <= n; i++){
				if (min>d[i] && check[i] == 0){
					min = d[i];
					c = i;
				}
			}
			check[c] = 1;
			for (i = 1; i <= n; i++){
				if (check[i] == 0){
					int temp;
					temp = d[c]>map[c][i] ? d[c] : map[c][i];
					d[i] = d[i] < temp ? d[i] : temp;
				}
			}
		}
		printf("%d\n", d[n]);
	}
	return 0;
}
