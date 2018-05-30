#include<stdio.h>
int main()
{
	double height, climb, slip, tired;
	while (scanf("%lf%lf%lf%lf", &height, &climb, &slip, &tired) != EOF){
		if (height + climb + slip + tired == 0){
			break;
		}
		double cent = tired / 100.0, now = 0.0, day = 1.0;
		double temp = climb*cent;
		while (1){
			if (climb > 0.0){
				now += climb;
			}
			if (now > height){
				break;
			}
			now -= slip;
			if (now < 0.0){
				break;
			}
			climb -= temp;
			day += 1;
		}
		if (now >= height){
			printf("success on day %.0lf\n", day);
		}
		else{
			printf("failure on day %.0lf\n", day);
		}
	}
	return 0;
}
