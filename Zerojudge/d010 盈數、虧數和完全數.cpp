#include<stdio.h>
int main()
{
	int number;
	int count, sum = 0;
	while (scanf("%d", &number) != EOF){
		for (count = 1; count <= number / 2; count++){
			if (number%count == 0){
				sum += count;
			}else{
				continue;
			}
		}
		if (sum < number){
			printf("虧數\n");
		}
		else if (sum == number){
			printf("完全數\n");
		}
		else if (sum > number){
			printf("盈數\n");
		}
		sum = 0;
	}
	return 0;
}
