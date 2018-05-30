#include<stdio.h>
#define ll long long int
ll dp[30006];
int main()
{
	ll t[6], i, j;
	t[0] = 1, t[1] = 5, t[2] = 10, t[3] = 25, t[4] = 50;
	for (i = 0; i < 30002; i++){
		dp[i] = 0;
	}
	dp[0] = 1;
	for (i = 0; i < 5; i++){
		for (j = t[i]; j <= 30000; j++){
			dp[j] += dp[j - t[i]];
		}
	}
	ll in1;
	while (scanf("%lld", &in1) != EOF){
		if (dp[in1] == 1){
			printf("There is only 1 way to produce %lld cents change.\n", in1);
		}
		else{
			printf("There are %lld ways to produce %lld cents change.\n", dp[in1], in1);
		}
	}
	return 0;
}
