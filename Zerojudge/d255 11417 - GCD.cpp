#include<stdio.h>
int dp[502][502] = { 0 }, t[502] = { 0 };
int gcd(int a, int b)
{
	while (a%b){
		int t = a;
		a = b;
		b = t%b;
	}
	return b;
}
int main()
{
	int i, j;
	for (i = 1; i < 501; i++){
		for (j = i + 1; j < 501; j++){
			dp[i][j] += (dp[i][j - 1] + gcd(i, j));
			t[j] += dp[i][j];
		}
	}
	int in1;
	while (scanf("%d", &in1) != EOF){
		if (in1 == 0)
			break;
		printf("%d\n", t[in1]);
	}
	return 0;
}
