#include<stdio.h>
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF)
		printf("%d\n", in1 * 8 - 11);
	return 0;
}
