#include<stdio.h>
int main()
{
	long long int i, j, dp[30][30] = { 0 };
	dp[0][1] = 1;
	for (i = 1; i < 27; i++){
		for (j = i; j < 27; j++){
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
		}
	}
	int in1;
	while (scanf("%d", &in1) != EOF){
		printf("%lld\n", dp[in1 + 1][in1 + 1]);
	}
	return 0;
}
