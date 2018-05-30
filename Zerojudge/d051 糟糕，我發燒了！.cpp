#include<stdio.h>
int main()
{
	double F;
	while (scanf("%lf", &F) != EOF){
		printf("%.3lf\n", (F - 32) / 1.8);
		F = 0;
	}
	return 0;
}
