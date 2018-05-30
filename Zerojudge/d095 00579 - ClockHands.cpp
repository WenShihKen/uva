#include<stdio.h>
int main()
{
	double hour, min;
	while (scanf("%lf:%lf", &hour, &min) != EOF){
		if (hour == 0 && min == 0){
			break;
		}
		double degree_hour, degree_min, ans = 0.000;
		if (hour == 12){
			hour = 0;
		}
		degree_hour = hour * 30 + (min*0.5);
		degree_min = min * 6;
		if (degree_hour >= degree_min){
			ans = degree_hour - degree_min;
			if (ans >= 180.000){
				ans = 360 - ans;
			}
		}
		else if (degree_hour <= degree_min){
			ans = degree_min - degree_hour;
			if (ans >= 180.000){
				ans = 360 - ans;
			}
		}
		printf("%.3lf\n", ans);
	}
	return 0;
}
