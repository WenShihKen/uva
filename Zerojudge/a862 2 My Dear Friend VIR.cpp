#include<stdio.h>
int main()
{
	long double v, r;
	while (scanf("%llf%llf", &v, &r) != EOF){
		printf("%.4llf\n", (v / r) * 1000);
	}
	return 0;
}
