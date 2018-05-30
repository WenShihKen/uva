#include<stdio.h>
#include<math.h>
int main()
{
	long double in1;
	while (scanf("%llf", &in1) != EOF){
		long double temp = 0.0;
		temp = powl(in1, 1 / 3.0);
		printf("%.0llf\n", temp);
	}
	return 0;
}
