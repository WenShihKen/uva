#include<stdio.h>
int main()
{
	long long int n, k;
	while (scanf("%lld%lld", &n, &k) != EOF){
		long long int sum = 0, temp;
		sum = n;
		while (n >= k){
			temp = n / k;
			sum += temp;
			n = n%k + temp;
		}
		printf("%lld\n", sum);
	}
	return 0;
}
