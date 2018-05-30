#include<stdio.h>
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		printf("%d\n", (in1 + in2) * 2);
	}
	return 0;
}
