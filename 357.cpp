#include<stdio.h>
#include<iostream>
using namespace std;

long long int dp[30005] = { 1 };
int main()
{
	int i, j;
	int temp[5] = { 1,5,10,25,50 };
	for (i = 0; i < 5; i++) {
		for (j = temp[i]; j <= 30000; j++) {
			dp[j] += dp[j - temp[i]];
		}
	}
	int in1;
	while (cin >> in1) {
		if (dp[in1] == 1) {
			printf("There is only 1 way to produce %d cents change.\n", in1);
		}
		else {
			printf("There are %lld ways to produce %d cents change.\n", dp[in1], in1);
		}
	}
	return 0;
}