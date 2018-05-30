#include<stdio.h>
int main()
{
	int mins;
	while (scanf("%d", &mins) != EOF){
		printf("%d\n", (60 + (25 - mins) )% 60);
	}
	return 0;
}
