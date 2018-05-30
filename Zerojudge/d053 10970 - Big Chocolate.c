#include<stdio.h>
int main()
{
	long long int n, m;
	while (scanf("%lld%lld", &n, &m) != EOF){
		printf("%lld\n", n*m - 1);
	}
	return 0;
}
