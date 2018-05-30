#include<stdio.h>
#include<math.h>
int main()
{
	long double in1, in2;
	while (scanf("%llf%llf", &in1, &in2) != EOF){
		long double temp = 0.0;
		temp = powl(in2, 1 / in1);
		printf("%.0llf\n", temp);
	}
	return 0;
}
