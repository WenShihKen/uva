#include<stdio.h>
#include<stdlib.h>
int all[520] = { 0 }, dp[50005] = { 0 };
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int i, sum = 0, j;
		for (i = 0; i < in1; i++){
			scanf("%d", &all[i]);
			sum += all[i];
		}
		int half = sum / 2;
		for (i = 0; i < in1; i++){
			for (j = half; j - all[i] >= 0; j--){
				if (dp[j]>dp[j - all[i]] + all[i]){
					dp[j] = dp[j];
				}
				else{
					dp[j] = dp[j - all[i]] + all[i];
				}
			}
		}
		printf("%d %d\n", dp[half], sum - dp[half]);
	}
	return 0;
}
