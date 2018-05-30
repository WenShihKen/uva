#include<stdio.h>
int main()
{
	double a, b, c, d, e, f;
	while (scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF){
		double x1, x2, y1, y2, temp1, temp2;
		x1 = a*e - b*d;  //x分母
		x2 = c*e - b*f;  //x分子
		y1 = a*e - b*d;  //y分母
		y2 = a*f - c*d;  //y分母
		temp1 = x2 / x1; temp2 = y2 / y1;
		if (x1==0&&y1==0){
			if (x2 == 0 && y2 == 0){
				printf("Too many\n");
			}
			else if (x2 != 0 && y2 != 0){
				printf("No answer\n");
			}
		}
		else if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0){
			printf("x=%.2lf\n", temp1);
			printf("y=%.2lf\n", temp2);
		}
	}
	return 0;
}
