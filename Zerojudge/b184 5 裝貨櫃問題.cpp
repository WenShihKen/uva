#include<stdio.h>
int main()
{
	int t;
	while (scanf("%d", &t) != EOF){
		int dp[101] = { 0 };
		int weight, price;
		for (int i = 0; i < t; i++){
			scanf("%d%d", &weight, &price);
			for (int j = 100; j - weight >= 0; j--){
				if (dp[j]>dp[j - weight] + price){
					dp[j] = dp[j];
				}
				else{
					dp[j] = dp[j - weight] + price;
				}
			}
		}
		printf("%d\n", dp[100]);
	}
	return 0;
}
