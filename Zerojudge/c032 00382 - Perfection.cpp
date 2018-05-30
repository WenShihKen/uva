#include<stdio.h>
int main()
{
	long long int num;
	printf("PERFECTION OUTPUT\n");
	while (scanf("%lld", &num) != EOF){
		long long int sum = 0, count;
		if (num == 0){
			printf("END OF OUTPUT\n");
			break;
		}
		for (count = 1; count <= num / 2; count++){
			if (num%count == 0){
				sum += count;
			}
			else{
				continue;
			}
		}
		if (num > sum){
			printf("%5lld  DEFICIENT\n", num);
		}
		else if (num == sum){
			printf("%5lld  PERFECT\n", num);
		}
		else if (num < sum){
			printf("%5lld  ABUNDANT\n", num);
		}
	}
	return 0;
}
