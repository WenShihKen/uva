#include<stdio.h>
int main()
{
	long long int a, b;
	while (scanf("%lld%lld", &a, &b) != EOF){
		long long int sum = 0;
		printf("%lld", (b - a + 1) / 2 + ((a % 2<1) && (b % 2<1)));
	}
	return 0;
}
