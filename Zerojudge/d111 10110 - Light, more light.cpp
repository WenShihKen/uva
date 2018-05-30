#include<stdio.h>
#include<math.h>
int main()
{
	double num;
	while (scanf("%lf", &num) != EOF){
		if (num == 0){
			break;
		}
		double temp = 0.0;
		if (sqrt(num) - floor(sqrt(num))!=0){
			printf("no\n");
		}
		else{
			printf("yes\n");
		}
	}
	return 0;
}
