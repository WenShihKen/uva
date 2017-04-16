#include<stdio.h>
#include<math.h>
int main()
{
	double in1;
	while (scanf("%lf", &in1) != EOF) {
		double o = in1;
		if (in1 == 0)
			break;
		int count = 0, l = int(sqrt(in1)), i, temp = in1;
		for (i = 2; i <= l; i++) {
			if (temp%i == 0) {
				count++;
				while (temp%i == 0) {
					temp /= i;
				}
			}
		}
		if (temp != 1) {
			count++;
		}
		printf("%.0lf : %d\n", o, count);
	}
	return 0;
}
