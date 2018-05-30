#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF){
		printf("%d\n",((a-1)/3) + 1);
	}
	return 0;
}
