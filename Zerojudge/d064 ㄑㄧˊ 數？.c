#include<stdio.h>
int main()
{
	int i;
	while (scanf("%d", &i) != EOF){
		if (i % 2 == 1){
			printf("Odd\n");
		}
		else{
			printf("Even\n");
		}
	}
	return 0;
}
