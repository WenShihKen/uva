#include<stdio.h>
long long int dp[30005] = { 1 };
int main()
{
	int i, j;
	int temp[11] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
	for (i = 0; i < 11; i++) {
		for (j = temp[i]; j <= 30000; j++) {
			dp[j] += dp[j - temp[i]];
		}
	}
	int in1, in2;
	while (scanf("%d.%d", &in1, &in2) != EOF) {
		if (in1 == 0 && in2 == 0)
			break;
		int t = in1 * 100 + in2;
		printf("%3d.", in1);
		if (in2 < 10) {
			printf("0%d", in2);
		}
		else {
			printf("%2d", in2);
		}
		printf("%17lld\n", dp[t]);
	}
	return 0;
}
