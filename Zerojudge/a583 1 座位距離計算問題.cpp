#include<stdio.h>
#include<math.h>
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF){
		int a[100], b[100], i, j, ans, temp;
		for (i = 0; i < m; i++){
			scanf("%d%d", &a[i], &b[i]);
		}
		for (i = 0,ans = (a[1] - a[0])*(a[1] - a[0]) + (b[1] - b[0])*(b[1] - b[0]); i < m; i++){
			for (j = i + 1; j < m; j++){
				temp = (a[j] - a[i])*(a[j] - a[i]) + (b[j] - b[i])*(b[j] - b[i]);
				if (temp > ans){
					continue;
				}
				else {
					ans = temp;
				}
				temp = 0;
			}
		}
		printf("%.4lf\n", sqrt(ans));
	}
	return 0;
}
