#include<stdio.h>
int main()
{
	int time;
	int i, j, sum;
	scanf("%d", &time);
	for (i = 1; i <= time; i++){
		int number1, number2;
		scanf("%d", &number1);
		scanf("%d", &number2);
		for (j = 1, sum = 0; j*j <= number2; j++){
			if (j*j >= number1&&j*j <= number2){
				sum += (j*j);
			}
		}
		printf("Case %d: %d\n", i, sum);
	}
	return 0;
}
