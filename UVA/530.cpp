#include<stdio.h>
int main()
{
	long long unsigned in1, in2;   /*in1>in2*/
	while (scanf("%llu%llu", &in1, &in2) != EOF) {
		long long unsigned temp, count;
		double sum1 = 1, sum2 = 1, ans = 1;
		if (in1 == 0 && in2 == 0) {
			break;
		}
		temp = in2;
		if (in1 - in2 > temp) {
			temp = in2;
		}
		else {
			temp = in1 - in2;
		}
		for (count = in1; count > in1 - temp; count--) {
			sum1 *= count;
		}
		for (count = temp; count >= 1; count--) {
			sum2 *= count;
		}
		ans = ans*(sum1 / sum2);
		printf("%.0lf\n", ans);
	}
	return 0;
}
