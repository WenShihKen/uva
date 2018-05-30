#include<stdio.h>
#include<math.h>
int main()
{
	double in1;
	while (scanf("%lf", &in1) != EOF){
		double x1 = 0.0, x2 = 0.0, x3 = 0.0, x4 = 0.0;
		x1 = (in1 / 2)*sqrtl(3);
		x2 = in1 / (1 + sqrtl(12) / 3);
		x3 = x1 / 2;
		double a, b, c;
		a = 5.0 / 3.0;
		b = (sqrtl(3)*7.0 / 3)*in1;
		c = -(in1*in1*(7.0 / 4));
		x4 = (-b + sqrt(b*b - 4 * a*c)) / a / 2;
		printf("%.10lf %.10lf %.10lf %.10lf\n", x1, x2, x3, x4);
	}
	return 0;
}
