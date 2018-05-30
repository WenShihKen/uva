#include<stdio.h>
int main()
{
	long long int in;
	while (scanf("%lld", &in) != EOF){
		long long int sum = 0;
		while (in!= 0){
			sum += in / 5;
			in /= 5;
		}
		printf("%lld\n", sum);
	}
	return 0;
}
