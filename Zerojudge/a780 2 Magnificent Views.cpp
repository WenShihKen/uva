#include<stdio.h>
int main()
{
	double in1, in2, in3;
	while (scanf("%lf%lf%lf", &in1, &in2, &in3) != EOF){
		if (in1 + in2 + in3==0.0)
			break;
		printf("%.2lf %.2lf\n", in1 / in2, in3 / (in1 / in2));
	}
	return 0;
}
