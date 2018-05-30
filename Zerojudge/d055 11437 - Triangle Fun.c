#include<stdio.h>
#include<math.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		double a1, a2, b1, b2, c1, c2;
		scanf("%lf%lf%lf%lf%lf%lf", &a1, &a2, &b1, &b2, &c1, &c2);
		printf("%.0lf\n", fabs(a1*b2 - a2*b1 + b1*c2 - b2*c1 + c1*a2 - c2*a1) / 14.0);
	}
	return 0;
}
