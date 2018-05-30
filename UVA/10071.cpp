#include<stdio.h>
int main()
{
	long long int in1, in2;
	while (scanf("%lld%lld", &in1, &in2) != EOF) {
		printf("%lld\n", in1 * 2 * in2);
	}
	return 0;
}
