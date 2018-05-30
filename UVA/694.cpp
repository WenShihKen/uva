#include<stdio.h>
int main()
{
	long long int in1, in2, time = 1;
	while (scanf("%lld%lld", &in1, &in2) != EOF) {
		if (in1 < 0 && in2 < 0) {
			break;
		}
		long long int round = 1, temp;
		temp = in1;
		while (in1 != 1) {
			if (in1 % 2 == 0) {
				round++;
				in1 /= 2;
			}
			else {
				if (in1 * 3 + 1 > in2) {
					break;
				}
				round++;
				in1 = (in1 * 3) + 1;
			}
		}
		printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", time, temp, in2, round);
		time++;
	}
	return 0;
}
