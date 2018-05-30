#include<stdio.h>
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		long long int out1=0;
		out1 = ((in1 + 1)*in1 / 2)*((in2 + 1)*in2 / 2);
		printf("%lld\n", out1);
	}
	return 0;
}
