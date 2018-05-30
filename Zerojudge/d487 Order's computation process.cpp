#include<stdio.h>
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF){
		int sum = 1, i;
		if (in1 == 0 || in1 == 1){
			printf("%d! = 1 = 1\n", in1);
		}
		else{
			for (i = 1; i <= in1; i++){
				sum *= i;
			}
			printf("%d! = ", in1);
			for (i = in1; i >= 2; i--){
				printf("%d * ", i);
			}
			printf("1 = %d\n", sum);
		}
	}
	return 0;
}
