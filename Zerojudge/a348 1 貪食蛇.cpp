#include<stdio.h>
#include<math.h>
int main()
{
	double second;
	while (scanf("%lf", &second) != EOF){
		if (second == 0)
			break;
		double x = 0.0, y = 0.0, max, temp = 0.0, test = 0.0;
		double count;
		temp = ceil(sqrt(second));
		max = temp*temp;
		test = max / 2;
		count = floor(sqrt(max) - 1);	/*判斷轉彎*/
		double how = 0.0;
		how = max - count;
		if (test == floor(test)){         /*偶數*/
			x = sqrt(max);
			y = sqrt(max);
			if (second == max - count){
				printf("%.0lf %.0lf\n", x, y);
			}
			else if (second > max - count){
				y -= (second - (how));
				printf("%.0lf %.0lf\n", x, y);
			}
			else if (second < max - count){
				x += (second - (how));
				printf("%.0lf %.0lf\n", x, y);
			}
		}
		else{							/*奇數*/
			x = sqrt(max);
			y = sqrt(max);
			if (second == max - count){
				printf("%.0lf %.0lf\n", x, y);
			}
			else if (second > max - count){
				x -= (second - (how));
				printf("%.0lf %.0lf\n", x, y);
			}
			else if (second < max - count){
				y += (second - (how));
				printf("%.0lf %.0lf\n", x, y);
			}
		}
	}
	return 0;
}
