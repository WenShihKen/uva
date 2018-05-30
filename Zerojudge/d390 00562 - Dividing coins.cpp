#include<stdio.h>
int dp[50005] = { 0 };
int m[1000] = { 0 };
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int many;
		scanf("%d", &many);
		int i, sum = 0;
		for (i = 0; i < 50002; i++){
			dp[i] = 0;
		}
		for (i = 0; i < many; i++){
			scanf("%d", &m[i]);
			sum += m[i];
		}
		int half = sum / 2;
		for (i = 0; i < many; i++){
			for (int j = half; j - m[i] >= 0; j--){
				if (dp[j]>dp[j - m[i]] + m[i]){
					dp[j] = dp[j];
				}
				else{
					dp[j] = dp[j - m[i]] + m[i];
				}
			}
		}
		printf("%d\n", sum - 2 * dp[half]);
	}
	return 0;
}
