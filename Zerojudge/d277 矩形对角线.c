#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF){
		printf("%d\n", a - (a % 2 == 1));
	}
	return 0;
}
