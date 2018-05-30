#include<stdio.h>
#include<string.h>
#include<math.h>
int gcd(int a, int b)
{
	if (a == b)
		return a;
	if (a>b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}
int main()
{
	long long int time, round = 1;
	scanf("%lld\n", &time);
	while (time--){
		long long int temp1 = 0, temp2 = 0, len1 = 0, len2 = 0, i;
		long long int sum1 = 0, sum2 = 0, g = 0;
		char in1[100], in2[100];
		gets(in1);
		gets(in2);
		len1 = strlen(in1) - 1;
		len2 = strlen(in2) - 1;
		temp1 = len1; temp2 = len2;
		for (i = 0; i <= len1; i++){
			if (in1[i] - 47 == 2){
				sum1 += powl(in1[i] - 47, temp1);
				temp1--;
			}
			else{
				temp1--;
				continue;
			}
		}
		for (i = 0; i <= len2; i++){
			if (in2[i] - 47 == 2){
				sum2 += powl(in2[i] - 47, temp2);
				temp2--;
			}
			else{
				temp2--;
				continue;
			}
		}
		g = gcd(sum1, sum2);
		if (g == 1){
			printf("Pair #%lld: Love is not all you need!\n", round);
		}
		else{
			printf("Pair #%lld: All you need is love!\n", round);
		}
		round++;
	}
	return 0;
}
