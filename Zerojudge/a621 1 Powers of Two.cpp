#include<stdio.h>
#include<math.h>
int main()
{
	long long int round;
	while (scanf("%lld", &round)!=EOF){
		long long int i;
		for (i = 0; i <= round; i++){
			long long int sum = 0;
			sum = powl(2, i);
			printf("2^%lld = %lld\n", i, sum);
		}
	}
	return 0;
}
