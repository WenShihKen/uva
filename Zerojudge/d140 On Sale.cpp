#include<stdio.h>
#include<math.h>
int main()
{
	int in1, in2;
	while (scanf("%d.%d", &in1, &in2) != EOF){
		int s = 100 * in1 + in2, count = 0;
		if (s <= 10000){
			s = s * 9 / 10;
			count = 1;
		}
		else if (s > 10000 && s <= 50000){
			s = s * 4 / 5;
		}
		else{
			s = s * 3 / 5;
		}
		if (count){
			printf("$%.2lf\n", s / 100.0 + 8);
		}
		else{
			printf("$%.2lf\n", s / 100.0);
		}
	}
	return 0;
}
