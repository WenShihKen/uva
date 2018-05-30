#include<stdio.h>
int main()
{
	double in1;
	while (scanf("%lf", &in1) != EOF){
		int all = 0;
		double count = 0.0, sum = 0.0, i;
		for (i = 2.0; sum < in1; i += 1.0){
			sum += 1 / i;
			all++;
		}
		printf("%d card(s)\n", all);
	}
	return 0;
}
