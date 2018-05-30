#include<stdio.h>
int dp[78] = { 0 };
int main()
{
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 2;
	int i;
	for (i = 4; i <= 76; i++){
		dp[i] = dp[i - 2] + dp[i - 3];
	}
	int in1;
	while (scanf("%d", &in1) != EOF){
		printf("%d\n", dp[in1]);
	}
	return 0;
}
