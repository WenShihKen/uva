#include<stdio.h>
#include<math.h>
int prime(int a)
{
	int i;
	for (i = 2; i <= sqrtl(a); i++){
		if (a%i == 0){
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF){
		int i, j, next = 0;
		for (i = 2; i <= in1; i++){
			if (prime(i) == 1){
				printf("%10d", i);
				next++;
			}
			if (next == 5){
				printf("\n");
				next = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
