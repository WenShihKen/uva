#include<stdio.h>
int main()
{
	double t1, t2, t3, x1, x3;
	while (scanf("%lf%lf%lf%lf%lf", &t1, &t2, &t3, &x1, &x3) != EOF){
		double temp1 = 0.0, temp2 = 0.0;
		double d1 = 0.0, d2 = 0.0, ans = 0.0;
		temp1 = t1 - t3;
		temp2 = x1 - x3;
		d1 = t1 - t2;
		d2 = d1 / temp1;
		x1 -= (temp2*d2);
		printf("%lf\n", x1);
	}
	return 0;
}
