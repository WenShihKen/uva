#include<stdio.h>
int main()
{
	double in1;
	while (scanf("%lf", &in1) != EOF){
		double i, sum = 1.0;
		for (i = 2.0; sum <= in1; i += 1.0){
			sum += 1 / i;
		}
		printf("%.0lf\n", i - 1.0);
	}
	return 0;
}
