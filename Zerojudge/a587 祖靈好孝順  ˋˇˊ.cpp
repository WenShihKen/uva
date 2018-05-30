#include<stdio.h>
int main()
{
	int t;
	while (scanf("%d", &t) != EOF){
		int i, j;
		int dp[10005] = { 0 }, w[101] = { 0 }, p[101] = { 0 };
		for (i = 0; i < t; i++){
			scanf("%d%d", &w[i], &p[i]);
		}
		int in1;
		scanf("%d", &in1);
		for (i = 0; i < t; i++){
			for (j = in1; j >= w[i]; j--){
				if (dp[j - w[i]] + p[i] > dp[j]){
					dp[j] = dp[j - w[i]] + p[i];
				}
			}
		}
		printf("%d\n", dp[in1]);
	}
	return 0;
}
