#include<stdio.h>
#include<math.h>
int main()
{
	long long int a, n;
	while (scanf("%lld%lld", &a, &n) != EOF){
		long long int sum = 0;
		sum = pow(a, n);
		printf("%lld\n", sum);
	}
	return 0;
}
