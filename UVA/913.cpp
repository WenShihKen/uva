#include<stdio.h>
int main()
{
	long long int N;
	long long int count;
	while (scanf("%lld", &N) != EOF) {
		count = (N + 1)*(N + 1) / 4;
		count = (count * 2) - 1;
		printf("%lld\n", (count * 3) - 6);
		count = 0;
	}
	return 0;
}
