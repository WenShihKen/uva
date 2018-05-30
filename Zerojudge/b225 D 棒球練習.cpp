#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		if ((y2 - y1)*(x3 - x2) == (x2 - x1)*(y3 - y2)){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
		time--;
	}
	return 0;
}
