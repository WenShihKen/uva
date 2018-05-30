#include<stdio.h>
int main()
{
	double a1, a2, b1, b2;
	while (scanf("%lf%lf%lf%lf", &a1, &a2, &b1, &b2) ==4){
		double temp;
		if (a1 == 0 && a2 == 0 && b1 == 0 && b2 == 0){
			break;
		}
		else if ((a1*b2) - (a2*b1) == 0){
			printf("cheat!\n");
		}
		else{
			temp = 1 / ((a1*b2) - (a2*b1));
			a1 = a1*temp;
			a2 = (0 - a2)*temp;
			b1 = (0 - b1)*temp;
			b2 = b2*temp;
			printf("%.5lf %.5lf\n%.5lf %.5lf\n",b2,a2,b1,a1);
		}
	}
	return 0;
}
