#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
int main()
{
	long double in1, in2;
	while (scanf("%llf%llf", &in1, &in2) != EOF){
		long double temp1 = 0.0, temp2 = 0.0;
		temp1 = in1 / 2; temp2 = in2 / 2;
		printf("%.3llf\n", sqrt(temp2*temp2 - temp1*temp1)*pi*temp2);
	}
	return 0;
}
