#include<stdio.h>  /*依舊背包問題!!*/
int dp[101] = { 0 };
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int weight, full;
		scanf("%d%d", &weight, &full);
		int i;
		for (i = 100; i - weight >= 0; i--){
			if (dp[i] > dp[i - weight] + full){
				dp[i] = dp[i];
			}
			else{
				dp[i] = dp[i - weight] + full;
			}
		}
	}
	printf("%d\n", dp[100]);
	return 0;
}
