#include<stdio.h>
int main()
{
	double in1;
	while (scanf("%lf", &in1) != EOF){
		double temp = in1;
		if (in1 < 0){
			in1 = 0 - in1;
		}
		printf("|%.4lf|=%.4lf\n", temp, in1);
	}
	return 0;
}
