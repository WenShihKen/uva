#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF){
			printf("%d\n", a*a - a + 2);
	}
	return 0;
}
